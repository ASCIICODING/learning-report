#include <iostream>
using namespace std;
int n;
int& setValue ()
{
	return n;
}

int main()
{
	setValue() = 18;
	cout<<n;
	return 0;
}
