
#ifndef USART_INCLUDE_H
#define USART_INCLUDE_H

#include <cstdint>
#include "address .hxx"

namespace MCU
{

    struct USART_Typedef
    {
        struct
        {
            uint32_t PE : 1;
            uint32_t FE : 1;
            uint32_t NF : 1;
            uint32_t ORE : 1;
            uint32_t IDLE : 1;
            uint32_t RXNE : 1;
            uint32_t TC : 1;
            uint32_t TXE : 1;
            uint32_t LBD : 1;
            uint32_t CTS : 1;
            uint32_t RES : 22;
        } SR;

        struct
        {
            uint32_t DR : 9;
            uint32_t RES : 23;
        } DR;

        struct
        {
            uint32_t DIV_Fraction : 4;
            uint32_t DIV_Mantissa : 12;
            uint32_t RES : 16;
        } BRR;

        struct
        {
            uint32_t SBK : 1;
            uint32_t RWU : 1;
            uint32_t RE : 1;
            uint32_t TE : 1;
            uint32_t IDLEIE : 1;
            uint32_t RXNEIE : 1;
            uint32_t TCIE : 1;
            uint32_t TXEIE : 1;
            uint32_t PEIE : 1;
            uint32_t PS : 1;
            uint32_t PCE : 1;
            uint32_t WAKE : 1;
            uint32_t M : 1;
            uint32_t UE : 1;
            uint32_t RES1 : 1;
            uint32_t OVER8 : 1;
            uint32_t RES2 : 16;
        } CR1;

        struct
        {
            uint32_t ADD : 4;
            uint32_t RES1 : 1;
            uint32_t LBDL : 1;
            uint32_t LBDIE : 1;
            uint32_t RES2 : 1;
            uint32_t LBCL : 1;
            uint32_t CPHA : 1;
            uint32_t CPOL : 1;
            uint32_t CLKEN : 1;
            uint32_t STOP : 2;
            uint32_t LINEN : 1;
            uint32_t RES2 : 17;
        } CR2;

        struct
        {
            uint32_t EIE : 1;
            uint32_t IREN : 1;
            uint32_t IRLP : 1;
            uint32_t HDSEL : 1;
            uint32_t NACK : 1;
            uint32_t SCEN : 1;
            uint32_t DMAR : 1;
            uint32_t DMAT : 1;
            uint32_t RTSE : 1;
            uint32_t CTSE : 1;
            uint32_t CTSIE : 1;
            uint32_t ONEBIT : 1;
            uint32_t RES1 : 20;
        } CR3;
        struct
        {
            uint32_t PSC : 8;
            uint32_t GT : 8;
            uint32_t RES : 16;
        } GTPR;
        uint32_t RES1;
        uint32_t RES2;
    };

    USART_Typedef & USART1 = (*((USART_Typedef *)USART1_Base));
    USART_Typedef & USART2 = (*((USART_Typedef *)USART2_Base));
    USART_Typedef & USART6 = (*((USART_Typedef *)USART6_Base));
}

#endif // RCC_INCLUDE_H