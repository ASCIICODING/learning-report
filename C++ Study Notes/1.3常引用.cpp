#include <iostream>
using namespace std;
int main()
{
	int n = 100;
	const int &r = n;
	//r = 200;�����������ͨ���������޸������õ����� 
	n = 300;
	cout<<"r="<<r<<" n="<<n<<endl;
	return 0;
}
//const T&��T&�ǲ�ͬ�����ͣ�Ҫת����Ҫǿ������ת�� 
