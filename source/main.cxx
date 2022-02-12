

#include "rcc.hxx"


void Test()
{
	MCU::RCC.CR.HSEON = 1;
	while (MCU::RCC.CR.HSERDY == 1)
	{
	}
}


template<typename T>
T Add (T val1, T val2)
{
	return val1 + val2;
}


template<typename T>
T Add (T val1, T val2, T val3)
{
	return val1 + val2 + val3;
}


template <typename T>
class Apu
{
private:
	T a;
public:
	Apu(/* args */)
	{

	}
	~Apu()
	{

	}

	void Set(T c)
	{
		this->a = c;
	}
};





int main()
{
 

	Apu<char> apu;
	Apu<double> apu1;

	
	
	//Test();
	apu.Set(20121.5);
	apu1.Set(30.2);
	return 0;
}