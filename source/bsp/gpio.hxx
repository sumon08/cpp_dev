
#include "address .hxx"


namespace Gpio
{
    enum class Port 
    {
        PORTA,
        PORTB,
        PORTC,
        PORTD,
        PORTE,
        PORTF,
        PORTG,
        PORTH
    };


    enum class Pin
    {
        PIN0,
        PIN1,
        PIN2,
        PIN3,
        PIN4,
        PIN5,
        PIN6,
        PIN7,
        PIN8,
        PIN9,
        PIN10,
        PIN11,
        PIN12,
        PIN13,
        PIN14,
        PIN15
    };

    enum class Mode
    {
        INPUT,
        OUTPUT
    };

    template <Port port>
    struct GpioBase
    {
        enum {Address = 0};
    };


    template <>
    struct GpioBase<Port::PORTA>
    {
        enum {Address = GPIOA_Base};
    };
    

    template <>
    struct GpioBase<Port::PORTB>
    {
        enum {Address = GPIOB_Base};
    };
    
    template <>
    struct GpioBase<Port::PORTC>
    {
        enum {Address = GPIOC_Base};
    };
    

    template <>
    struct GpioBase<Port::PORTD>
    {
        enum {Address = GPIOD_Base};
    };
    

    template <>
    struct GpioBase<Port::PORTE>
    {
        enum {Address = GPIOE_Base};
    };

    template <>
    struct GpioBase<Port::PORTH>
    {
        enum {Address = GPIOH_Base};
    };


    



    
    
    
    
    


    template <Port Port, Pin pin>
    class Gpio
    {
    public:

    static inline void Mode(Mode mode)
    {

    }

    static inline void Set()
    {

    }

    static inline void Reset()
    {

    }
       
    };



    
    
    
} // namespace 
