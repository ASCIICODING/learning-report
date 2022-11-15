#include <iostream>
using namespace std;
inline int max (int a,int b)
{
	if (a>b)
		return a;
	return b;
}
int main()
{
	int a = 1,b = 2,k;
	k = max (a,b);
	/*编译器处理时，会将函数处理成：
	if (n1>n2)
		tmp = n1;
	else
		tmp = n2;
	k = tmp;
	也就是将函数体中的代码稍作变换，内联到主函数中，提高代码效率*/
	cout<<k;
	return 0;
}
