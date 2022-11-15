#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int m,n;
	const int *p = &n;
	int *p1;
	//*p = 5;编译出错，不可以通过常量指针修改其指向的内容 
	n = 4;
	cout<<*p<<endl;
	m = 3;
	p = &m;
	cout<<*p;
	p = p1;
	//p1 = p;编译错误，不能把常量指针赋值给非常量指针，反过来可以（常量指针所指向的内容一般不修改，若可以随意将其赋值给别的指针，会导致不安全） 
	p1 = (int*)p; //强制类型转换可以做到 
}

void myPrintf (const char *p)
{
	//strcpy (p,"this");编译错误，函数参数为常量指针时，函数内的操作不能修改参数指针所指地方的内容（strcpy中的指针为char类型，而函数参数为const char类型，导致编译出错） 
	printf ("%s",p);
}
