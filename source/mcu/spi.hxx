

#ifndef SPI_INCLUDE_H
#define SPI_INCLUDE_H

#include <cstdint>
#include "address .hxx"
namespace MCU
{
    struct SPI_Typedef
    {
        struct 
        {
            uint32_t CPHA : 1;
            uint32_t CPOL : 1;
            uint32_t MSTR : 1;
            uint32_t BR   : 3;
            uint32_t SPE  : 1;
            uint32_t LSBFIRST : 1;
            uint32_t SSI  : 1;
            uint32_t SSM  : 1;
            uint32_t RXONLY :1;
            uint32_t BIDIMODE :1;
            uint32_t BIDIOE :1;
            uint32_t  CRCEN :1;
            uint32_t CRCNEXT:1;
            uint32_t DFF : 1;
            uint32_t RES : 16;
        }CR1;
        struct 
       {    uint32_t RXNE:1;
            uint32_t TXE :1;
            uint32_t CHSIDE :1;
            uint32_t UDR :1;
            uint32_t CRCERR :1;
            uint32_t MODF :1;
            uint32_t OVR :1;
            uint32_t BSY :1;
            uint32_t FRE :1;
            uint32_t RES :23;

        }SR;
        struct 
        {
            uint32_t DR :16;
            uint32_t RES : 16;
        }DR;
        struct 
        {
            uint32_t CRCPOLY: 16;
            uint32_t RES :16;
        }CRCPR;
        struct 
        {
            uint32_t RxCRC :16;
            uint32_t RES: 16;
        }RXCRCR;
         struct 
        {
            uint32_t TxCRC :16;
            uint32_t RES: 16;
        }TXCRCR;
        struct 
        {  uint32_t CHLEN :1;
           uint32_t DATLEN :2;
           uint32_t CKPOL :1;
           uint32_t I2SSTD  :2;
           uint32_t RES1:1;
           uint32_t PCMSYNC :1;
           uint32_t I2SCFG :2;
           uint32_t I2SE :1;
           uint32_t I2SMOD :1;
           uint32_t RES2 : 20;
        }I2SCFGR;
        struct 
        {
           uint32_t I2SDIV: 8;
           uint32_t ODD :1;
           uint32_t MCKOE:1;
           uint32_t RES : 22;
        }I2SPR;



    };
    
    enum class 
    {
        FCLK_2 = 0,
        FCLK_4 = 1,
        FCLK_8 = 2,
        FCLK_16 = 3,
        FCLK_32 = 4,
        FCLK_64 = 5,
        FCLK_128 = 6,
        FCLK_256 = 7 
    }SpiBaud;



    SPI_Typedef & SPI1 = (*(SPI_Typedef *) SPI1_Base);
    SPI_Typedef & SPI4 = (*(SPI_Typedef *) SPI4_Base);



}