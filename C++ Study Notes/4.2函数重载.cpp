#include <iostream>
using namespace std;

int max (double f1,double f2)
{
	if (f1>f2)
		return f1;
	return f2;
}
int max (int n1,int n2)
{
	if (n1>n2)
		return n1;
	return n2;
}
int max (int n1,int n2,int n3)
{
	if (n1>=n2&&n1>=n3)
		return n1;
	else if (n2>=n1&&n2>=n3)
		return n2;
	return n3;
}
int main()
{
	double a = 1.1,b = 2.5;
	int m = 1,n = 2,k = 5;
	cout<<max (a,b)<<endl;
	cout<<max (m,n)<<endl;
	cout<<max (m,n,k)<<endl;
	max (a,n);//二义性，编译错误 
	return 0;
}
//编译器通过函数参数的类型、数量的不同来区分所调用的函数 
