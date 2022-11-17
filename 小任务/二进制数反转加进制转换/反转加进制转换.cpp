#include <iostream>
using namespace std;

class Number
{
	private:
		char *num;
		int length;
	public:
		Number ();
		void Init ();
		void Reverse ();
		unsigned int Convert ();
		void Print (); 
		void Free ();
};
Number::Number()
{
	num = NULL;
	length = 32;
}

void Number::Init()
{
	int i;
	num = new char[length];
	for (i=0;i<length;i++)
	{
		cin>>num[i];
	}
}

void Number::Reverse()
{
	int i = 0,j = length-1;
	char tmp;
	while (i!=j&&i!=j+1)
	{
		tmp = num[i];
		num[i] = num[j];
		num[j] = tmp;
		i++;
		j--;
	}
}

unsigned int pow (int a,int n)
{
	if (n==0)
	{
		return 1;
	}
	return a*pow(a,n-1);
}

unsigned int Number::Convert()
{
	int i,decimal = 0;
	for (i=0;i<length;i++) 
	{
		if (num[i]=='1')
		{
			decimal += pow(2,length-i-1);
		}
	}
	return decimal;
}

void Number::Print()
{
	cout<<num<<endl;
}

void Number::Free()
{
	delete []num;
}

int main()
{
	Number num1;
	unsigned int convert;
	num1.Init();
	num1.Reverse();
	convert = num1.Convert();
	cout<<convert<<endl;
	num1.Print();
	num1.Free();
	return 0;
}
