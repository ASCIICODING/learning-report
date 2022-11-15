#include <iostream>
using namespace std;

void swap (int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int n1,n2;
	cin>>n1>>n2;
	swap (n1,n2);
	cout<<n1<<" "<<n2<<endl;
	return 0;
}
