
# toolchain
TOOLCHAIN    = arm-none-eabi-
CC           = $(TOOLCHAIN)gcc
CXX 		 = $(TOOLCHAIN)g++
CP           = $(TOOLCHAIN)objcopy
AS           = $(TOOLCHAIN)gcc -x assembler-with-cpp
HEX          = $(CP) -O ihex
BIN          = $(CP) -O binary -S

# define mcu, specify the target processor
MCU          = cortex-m4

# define root dir
ROOT_DIR     = .

# define include dir
INCLUDE_DIRS =

# define bin dir
BIN_DIR      = $(ROOT_DIR)/build

# define lib dir
LIB_DIR      = $(ROOT_DIR)

# define freertos dir
FREERTOS_DIR = $(ROOT_DIR)/freertos

# define user dir
USER_DIR     = $(ROOT_DIR)/source

# link file
LINK_SCRIPT  = $(ROOT_DIR)/stm32_flash.ld

# user specific
SRC       =
ASM_SRC   =
CPP_SRC   = $(USER_DIR)/main.cxx



# user include
INCLUDE_DIRS  += $(USER_DIR)
INCLUDE_DIRS  += $(USER_DIR)/mcu
INCLUDE_DIRS  += $(USER_DIR)/bsp
#user include
#INCLUDE_DIRS  +=$(USER_DIR)/driver


# include sub makefiles
include makefile_std_lib.mk   # STM32 Standard Peripheral Library
# include makefile_freertos.mk  # freertos source

INCDIR  = $(patsubst %, -I%, $(INCLUDE_DIRS))

# run from Flash
DEFS	 = $(DDEFS) -DRUN_FROM_FLASH=1

OBJECTS  = $(ASM_SRC:.s=.o) $(SRC:.c=.o) $(CPP_SRC:.cxx=.o)

# Define optimisation level here
OPT = -Os

MC_FLAGS = -mcpu=$(MCU)

AS_FLAGS = $(MC_FLAGS) -g -gdwarf-2 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mlittle-endian -mthumb-interwork 
CP_FLAGS = $(MC_FLAGS) $(OPT) -g -gdwarf-2 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mlittle-endian -mthumb-interwork -fomit-frame-pointer -Wall $(DEFS)
LD_FLAGS = $(MC_FLAGS) -g -gdwarf-2 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mlittle-endian -mthumb-interwork -nostartfiles -Xlinker --gc-sections -T$(LINK_SCRIPT) -Wl,-Map=$(PROJECT_NAME).map,--cref,--no-warn-mismatch $(LIBDIR) $(LIB)

# all the files will be generated with this name (main.elf, main.bin, main.hex, etc)
PROJECT_NAME=$(BIN_DIR)/main

#
# makefile rules
#

.SECONDARY: $(OBJECTS)

all: $(PROJECT_NAME).elf $(PROJECT_NAME).hex $(PROJECT_NAME).bin
	$(TOOLCHAIN)size $(PROJECT_NAME).elf


%.o: %.c
	echo $(CP_FLAGS)
	$(CC) -c $(CP_FLAGS) $(INCDIR) $< -o $@
	
%.o: %.cxx
	echo $(CP_FLAGS)
	$(CXX) -c $(CP_FLAGS) -std=c++17 -fno-rtti -fno-exceptions $(INCDIR) $< -o $@



%.o: %.s
	echo $(AS_FLAGS)
	$(AS) -c $(AS_FLAGS) $< -o $@



%.elf: $(OBJECTS)
	$(CC) $(OBJECTS) $(LD_FLAGS) $(LIBS) -o $@



%.hex: %.elf
	$(HEX) $< $@

%.bin: %.elf
	$(BIN)  $< $@

flash: $(PROJECT).bin
	st-flash write $(PROJECT).bin 0x8000000

erase:
	st-flash erase

clean:
	rm -rf $(OBJECTS)
	rm -rf $(PROJECT_NAME).elf
	rm -rf $(PROJECT_NAME).map
	rm -rf $(PROJECT_NAME).hex
	rm -rf $(PROJECT_NAME).bin
	rm -rf $(SRC:.c=.lst)
	rm -rf $(ASM_SRC:.s=.lst)

