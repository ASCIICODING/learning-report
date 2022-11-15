#include <iostream>
using namespace std;
int func (int a,int b=1,int c=1)
{
	return a;
}

int main()
{
	int m = 1,n = 5;
	cout<<func (m,n);//等效于func (m,n,1)
	cout<<func (m);//等效于func (m,1,1)
	//cout<<func (m,,n); 编译错误，只能最右边连续若干个参数缺省 
	return 0;
}
//函数参数可缺省目的在于提高程序的可补充性，即如果写好的函数需要添加某个新的参数，而原先那些调用该函数的语句，未必需要使用新增的参数，那么为了避免对那些函数调用语句的修改，就可以使用缺省参数 
