#include <iostream>
using namespace std;
int main()
{
	double a = 4,b = 5;
	double &r1 = a;
	double &r2 = r1;
	cout<<"r2="<<r2<<" r1="<<r1<<" a="<<a<<endl;
	r1 = b;
	cout<<"r2="<<r2<<" r1="<<r1<<" a="<<a<<endl;
	return 0;
}
