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
	/*����������ʱ���Ὣ��������ɣ�
	if (n1>n2)
		tmp = n1;
	else
		tmp = n2;
	k = tmp;
	Ҳ���ǽ��������еĴ��������任���������������У���ߴ���Ч��*/
	cout<<k;
	return 0;
}
