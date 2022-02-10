
#ifndef RCC_INCLUDE_H
#define RCC_INCLUDE_H

#include <cstdint>
#include "address .hxx"

namespace MCU
{

    struct RCC_Typedef
    {
        struct
        {
            uint32_t HSION : 1;
            uint32_t HSIRDY : 1;
            uint32_t RES1 : 1;
            uint32_t HSITRIM : 5;
            uint32_t HSICAL : 8;
            uint32_t HSEON : 1;
            uint32_t HSERDY : 1;
            uint32_t HSEBYP : 1;
            uint32_t CSSON : 1;
            uint32_t RES2 : 4;
            uint32_t PLLON : 1;
            uint32_t PLLRDY : 1;
            uint32_t PLLI2SON : 1;
            uint32_t PLLI2SRDY : 1;
            uint32_t RES3 : 4;
        } CR;

        struct
        {
            uint32_t PLLM : 6;
            uint32_t PLLN : 9;
            uint32_t RES1 : 1;
            uint32_t HSITRIM : 5;
            uint32_t PLLP : 2;
            uint32_t RES2 : 4;
            uint32_t PLLSRC : 1;
            uint32_t RES3 : 1;
            uint32_t PLLQ : 4;
            uint32_t RES4 : 4;
        } PLLCFGR;

        struct
        {
            uint32_t SW : 2;
            uint32_t SWS : 2;
            uint32_t HPRE : 4;
            uint32_t RES1 : 2;
            uint32_t PPRE1 : 3;
            uint32_t PPRE2 : 3;
            uint32_t RTCPRE : 5;
            uint32_t MCO1 : 2;
            uint32_t I2SSRC : 1;
            uint32_t MCO1PRE : 3;
            uint32_t MCO2PRE : 3;
            uint32_t MCO2 : 2;
        } CFGR;

        struct
        {
            uint32_t LSIRDYF : 1;
            uint32_t LSERDYF : 1;
            uint32_t HSIRDYF : 1;
            uint32_t HSERDYF : 1;
            uint32_t PLLRDYF : 1;
            uint32_t PLLI2SRDYF : 1;
            uint32_t RES1 : 1;
            uint32_t CSSF : 1;
            uint32_t LSIRDYIE : 1;
            uint32_t LSERDYIE : 1;
            uint32_t HSIRDYIE : 1;
            uint32_t HSERDYIE : 1;
            uint32_t PLLRDYIE : 1;
            uint32_t PLLI2SRDYIE : 1;
            uint32_t RES2 : 2;
            uint32_t LSIRDYC : 1;
            uint32_t LSERDYC : 1;
            uint32_t HSIRDYC : 1;
            uint32_t HSERDYC : 1;
            uint32_t PLLRDYC : 1;
            uint32_t PLLI2SRDYC : 1;
            uint32_t RES3 : 1;
            uint32_t CSSC : 1;
            uint32_t RES4 : 8;
        } CIR;

        struct
        {
            uint32_t GPIOARST : 1;
            uint32_t GPIOBRST : 1;
            uint32_t GPIOCRST : 1;
            uint32_t GPIODRST : 1;
            uint32_t GPIOERST : 1;
            uint32_t RES1 : 2;
            uint32_t GPIOHRST : 1;
            uint32_t RES2 : 4;
            uint32_t CRCRST : 1;
            uint32_t RES3 : 8;
            uint32_t DMA1RST : 1;
            uint32_t DMA2RST : 1;
            uint32_t RES4 : 9;
        } AHB1RSTR;

        struct
        {
            uint32_t RES1 : 7;
            uint32_t GPIOHRST : 1;
            uint32_t RES2 : 24;
        } AHB2RSTR;

        uint32_t RES1;
        uint32_t RES2;

        struct
        {
            uint32_t TIM2RST : 1;
            uint32_t TIM3RST : 1;
            uint32_t TIM4RST : 1;
            uint32_t TIM5RST : 1;
            uint32_t RES1 : 7;
            uint32_t WWDGRST : 1;
            uint32_t RES2 : 2;
            uint32_t SPI2RST : 1;
            uint32_t SPI3RST : 1;
            uint32_t RES3 : 1;
            uint32_t USART2RST : 1;
            uint32_t RES4 : 3;
            uint32_t I2C1RST : 1;
            uint32_t I2C2RST : 1;
            uint32_t I2C3RST : 1;
            uint32_t RES5 : 4;
            uint32_t PWRRST : 1;
            uint32_t RES6 : 3;
        } APB1RSTR;


        struct
        {
            uint32_t TIM1RST : 1;
            uint32_t RES1 : 3;
            uint32_t USART1RST : 1;
            uint32_t USART6RST : 1;
            uint32_t RES2 : 2;
            uint32_t ADC1RST : 1;
            uint32_t RES3 : 2;
            uint32_t SDIORST : 1;
            uint32_t SPI1RST : 1;
            uint32_t SPI4RST : 1;
            uint32_t SYSCFGRST : 1;
            uint32_t RES4 : 1;
            uint32_t USART2RST : 1;
            uint32_t RES5 : 3;
            uint32_t TIM9RST : 1;
            uint32_t TIM10RST : 1;
            uint32_t TIM11RST : 1;
            uint32_t RES6 : 13;
        } APB2RSTR;


        struct
        {
            uint32_t GPIOAEN : 1;
            uint32_t GPIOBEN : 1;
            uint32_t GPIOCEN : 1;
            uint32_t GPIODEN : 1;
            uint32_t GPIOEEN : 1;
            uint32_t RES1 : 2;
            uint32_t GPIOHEN : 1;
            uint32_t RES2 : 4;
            uint32_t CRCEN : 1;
            uint32_t RES3 : 8;
            uint32_t DMA1EN : 1;
            uint32_t DMA2EN : 1;
            uint32_t RES4 : 9;
        } AHB1ENR;


        struct
        {
            uint32_t RES1 : 7;
            uint32_t OTGFSEN : 1;
            uint32_t RES2 : 24;
        } AHB2ENR;

        uint32_t res3;
        uint32_t res4;


        struct
        {
            uint32_t TIM2EN : 1;
            uint32_t TIM3EN : 1;
            uint32_t TIM4EN : 1;
            uint32_t TIM5EN : 1;
            uint32_t res1 : 7;
            uint32_t WWDGEN : 1;
            uint32_t res2 : 2;
            uint32_t SPI2EN : 1;
            uint32_t SPI3EN : 1;
            uint32_t res3 : 1;
            uint32_t USART2EN : 1;
            uint32_t res4 : 3;
            uint32_t I2C1EN : 1;
            uint32_t I2C2EN : 1;
            uint32_t I2C3EN : 1;
            uint32_t res5 : 4;
            uint32_t PWREN : 1;
            uint32_t res6 : 3;
        }APB1ENR;
        

        struct
        {
            uint32_t TIM1EN : 1;
            uint32_t res1 : 3;
            uint32_t USART1EN : 1;
            uint32_t USART6EN : 1;
            uint32_t res2 : 2;
            uint32_t ADC1EN : 1;
            uint32_t res3 : 2;
            uint32_t SDIOEN : 1;
            uint32_t SPI1EN : 1;
            uint32_t SPI4EN : 1;
            uint32_t SYSCFGEN : 1;
            uint32_t res4 : 1;
            uint32_t TIM9EN : 1;
            uint32_t TIM10EN : 1;
            uint32_t TIM11EN : 1;
            uint32_t res5 : 13;
        }APB2ENR;


        struct
        {
            uint32_t GPIOALPEN : 1;
            uint32_t GPIOBLPEN : 1;
            uint32_t GPIOCLPEN : 1;
            uint32_t GPIODLPEN : 1;
            uint32_t GPIOELPEN : 1;
            uint32_t RES1 : 2;
            uint32_t GPIOHLPEN : 1;
            uint32_t RES2 : 4;
            uint32_t CRCLPEN : 1;
            uint32_t RES3 : 2;
            uint32_t FLITFLPEN : 1;
            uint32_t SRAM1LPEN : 1;
            uint32_t RES4 : 4;
            uint32_t DMA1LPEN : 1;
            uint32_t DMA2LPEN : 1;
            uint32_t RES5 : 9;
        } AHB1LPENR;


        struct
        {
            uint32_t RES1 : 7;
            uint32_t OTGFSLPEN : 1;
            uint32_t RES2 : 24;
        } AHB2LPENR;


        struct
        {
            uint32_t TIM2LPN : 1;
            uint32_t TIM3LPEN : 1;
            uint32_t TIM4LPEN : 1;
            uint32_t TIM5lPEN : 1;
            uint32_t res1 : 7;
            uint32_t WWDGLPEN : 1;
            uint32_t res2 : 2;
            uint32_t SPI2LPEN : 1;
            uint32_t SPI3LPEN : 1;
            uint32_t res3 : 1;
            uint32_t USART2LPEN : 1;
            uint32_t res4 : 3;
            uint32_t I2C1LPEN : 1;
            uint32_t I2C2LPEN : 1;
            uint32_t I2C3LPEN : 1;
            uint32_t res5 : 4;
            uint32_t PWRLPEN : 1;
            uint32_t res6 : 3;
        }APB1LPENR;



        struct
        {
            uint32_t TIM1LPEN : 1;
            uint32_t res1 : 3;
            uint32_t USART1LPEN : 1;
            uint32_t USART6LPEN : 1;
            uint32_t res2 : 2;
            uint32_t ADC1LPEN : 1;
            uint32_t res3 : 2;
            uint32_t SDIOLPEN : 1;
            uint32_t SPI1LPEN : 1;
            uint32_t SPI4LPEN : 1;
            uint32_t SYSCFGLPEN : 1;
            uint32_t res4 : 1;
            uint32_t TIM9LPEN : 1;
            uint32_t TIM10LPEN : 1;
            uint32_t TIM11LPEN : 1;
            uint32_t res5 : 13;
        }APB2LPENR;

        struct
        {
            uint32_t LSEON : 1;
            uint32_t LSERDY : 1;
            uint32_t LSEBYP : 1;
            uint32_t res1 : 5;
            uint32_t RTCSEL : 2;
            uint32_t res2 : 5;
            uint32_t RTCEN : 1;
            uint32_t BDRST : 1;
            uint32_t res3 : 15;
        }BDCR;

        struct
        {
            uint32_t LSION : 1;
            uint32_t LSIRDY : 1;
            uint32_t res1 : 22;
            uint32_t RMVF : 1;
            uint32_t BORRSTF : 1;
            uint32_t PINRSTF : 1;
            uint32_t PORRSTF : 1;
            uint32_t SFTRSTF : 1;
            uint32_t IWDGRSTF : 1;
            uint32_t WWDGRSTF : 1;
            uint32_t LPWRRSTF : 1;
        }CSR;

        struct
        {
            uint32_t MODPER : 13;
            uint32_t INCSTEP : 15;
            uint32_t res1 : 2;
            uint32_t SPREADSEL: 1;
            uint32_t SSCGEN : 1;
        }SSCGR;

        struct
        {
            uint32_t res1 : 6;
            uint32_t PLLI2SN : 9;
            uint32_t res2 : 13;
            uint32_t PLLI2SR: 3;
            uint32_t res3 : 1;
        }PLLI2SCFGR;

        struct
        {
            uint32_t res1 : 24;
            uint32_t TIMPRE : 1;
            uint32_t res2 : 7;
        }DCKCFGR;
    };
    RCC_Typedef  & RCC = (*((RCC_Typedef *)RCC_Base));
}


#endif // RCC_INCLUDE_H