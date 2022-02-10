#ifndef RCC_INCLUDE_H
#define RCC_INCLUDE_H

#include <cstdint>
#include "address .hxx"

namespace MCU
{

    struct ADC_Typedef
    {
        struct
        {
            uint32_t AWD : 1;
            uint32_t EOC : 1;
            uint32_t JEOC : 1;
            uint32_t JSTRT : 1;
            uint32_t STRT : 1;
            uint32_t OVR : 1;
            uint32_t Reserved : 26;
            
        } SR;

        struct
        {
            uint32_t AWDCH : 5;
            uint32_t EOCIE : 1;
            uint32_t AWDIE : 1;
            uint32_t JEOCIE : 1;
            uint32_t SCAN : 1;
            uint32_t AWD_SGL : 1; //SGL or AWD? AWD SGL !
            uint32_t JAUTO : 1;
            uint32_t DISCEN : 1;
            uint32_t JIDISCEN : 1;
            uint32_t DISC : 3;
            uint32_t Reserved : 6;
            uint32_t JAWDEN : 1;
            uint32_t AWDEN : 1;
            uint32_t RES : 2;
            uint32_t OVRIE : 1; 
            uint32_t Reserved : 5;
        } CR1;

        struct
        {
            uint32_t ADON : 1;
            uint32_t CONT : 1;
            uint32_t Reserved : 6;
            uint32_t DMA : 1;
            uint32_t DDS : 1;
            uint32_t EOCS : 1;
            uint32_t ALIGN : 1;
            uint32_t Reserved : 4;
            uint32_t JEXTSEL : 4;
            uint32_t JEXTEN : 2;
            uint32_t JSWSTART : 1;
            uint32_t Reserved : 1;
            uint32_t EXTSEL : 4;
            uint32_t EXTEN : 2;
            uint32_t SWSTART : 1;
            uint32_t Reserved : 1;
        } CR2;

        
        uint32_t SMPR1;
        uint32_t SMPR2;

        struct
        {
            uint32_t JOFFSET1 : 12;
            uint32_t Reserved : 20;
          
        } JOFR1;

        struct
        {
            uint32_t JOFFSET2 : 12;
            uint32_t Reserved : 20;
        } JOFR2;

        struct
        {
            uint32_t JOFFSET3 : 12;
            uint32_t Reserved : 20;
        } JOFR3;
        
        struct
        {
            uint32_t JOFFSET4 : 12;
            uint32_t Reserved : 20;
        } JOFR4;
        struct
        {
            uint32_t HT : 12;
            uint32_t Reserved : 20;
        } HTR;
        struct
        {
            uint32_t LT : 12;
            uint32_t Reserved : 20;
        } LTR;

        struct
        {
            uint32_t SQx : 20;
            uint32_t L : 4;
            uint32_t Reserved : 8;
        } SQR1;

         struct
        {
            uint32_t SQx : 30;
            uint32_t Reserved : 2;
        } SQR2; 

        struct
        {
            uint32_t SQx : 30;
            uint32_t Reserved : 2;
        } SQR3;

        struct
        {
            uint32_t SQx : 20;
            uint32_t JL : 2;
            uint32_t Reserved : 8;
        } JSQR3;  

        struct
        {
            uint32_t JDATA : 16;
            uint32_t Reserved : 16;
        } JDR1;

        struct
        {
            uint32_t JDATA : 16;
            uint32_t Reserved : 16;
        } JDR2;

        struct
        {
            uint32_t JDATA : 16;
            uint32_t Reserved : 16;
        } JDR3;

        struct
        {
            uint32_t JDATA : 16;
            uint32_t Reserved : 16;
        } JDR4;

        struct
        {
            uint32_t REGULARDATA : 16;
            uint32_t Reserved : 16;
        } DR;

        struct
        {
    
            uint32_t Reserved : 16;
            uint32_t ADCPRE : 2;
            uint32_t Reserved :  4;
            uint32_t VBATE : 1;
            uint32_t TSVREEE : 1;
            uint32_t Reserved : 8;

        } CCR;

    };



    ADC_Typedef  & ADC1 (*((ADC_Typedef *)ADC1_Base));
}


#endif // RCC_INCLUDE_H