
# STD Defines
DDEFS += -DSTM32F40_41xxx -DHSE_VALUE=8000000

# source director
STM32F4_STD_LIB     = $(LIB_DIR)
STM32F4_CORE_DIR    = $(LIB_DIR)/CMSIS/Include
STM32F4_DEVICE_DIR  = $(LIB_DIR)/CMSIS/Device/ST/STM32F4xx
STM32F4_SRC_DIR     = $(STM32F4_STD_LIB)/src
STM32F4_INC_DIR     = $(STM32F4_STD_LIB)/inc

# startup
ASM_SRC  += $(STM32F4_DEVICE_DIR)/Source/Templates/gcc_ride7/startup_stm32f40_41xxx.s

# CMSIS
SRC  += $(STM32F4_DEVICE_DIR)/Source/Templates/system_stm32f4xx.c
#SRC  += $(STM32F1_CORE_DIR)/core_cm3.c

# use libraries, please add or remove when you use or remove it.
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_rcc.c
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_tim.c
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_gpio.c
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_exti.c
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_usart.c
# SRC  += $(STM32F4_SRC_DIR)/stm32f4xx_adc.c
# SRC  += $(STM32F4_SRC_DIR)/misc.c

# include directories
INCLUDE_DIRS += $(STM32F4_CORE_DIR)
INCLUDE_DIRS += $(STM32F4_DEVICE_DIR)
INCLUDE_DIRS += $(STM32F4_DEVICE_DIR)/Include
INCLUDE_DIRS += $(STM32F4_INC_DIR)
INCLUDE_DIRS += $(STM32F4_STD_LIB)

