#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int m,n;
	const int *p = &n;
	int *p1;
	//*p = 5;�������������ͨ������ָ���޸���ָ������� 
	n = 4;
	cout<<*p<<endl;
	m = 3;
	p = &m;
	cout<<*p;
	p = p1;
	//p1 = p;������󣬲��ܰѳ���ָ�븳ֵ���ǳ���ָ�룬���������ԣ�����ָ����ָ�������һ�㲻�޸ģ����������⽫�丳ֵ�����ָ�룬�ᵼ�²���ȫ�� 
	p1 = (int*)p; //ǿ������ת���������� 
}

void myPrintf (const char *p)
{
	//strcpy (p,"this");������󣬺�������Ϊ����ָ��ʱ�������ڵĲ��������޸Ĳ���ָ����ָ�ط������ݣ�strcpy�е�ָ��Ϊchar���ͣ�����������Ϊconst char���ͣ����±������ 
	printf ("%s",p);
}
