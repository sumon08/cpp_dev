

#include "rcc.hxx"


void Test()
{
	MCU::RCC.CR.HSEON = 1;
	while (MCU::RCC.CR.HSERDY == 1)
	{
	}
}

int main()
{

	Test();

	return 0;
}