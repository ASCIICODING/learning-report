#include <iostream>
using namespace std;
int main()
{
	int n = 100;
	const int &r = n;
	//r = 200;编译出错，不能通过常引用修改其引用的内容 
	n = 300;
	cout<<"r="<<r<<" n="<<n<<endl;
	return 0;
}
//const T&和T&是不同的类型，要转换需要强制类型转换 
