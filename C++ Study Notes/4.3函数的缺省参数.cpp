#include <iostream>
using namespace std;
int func (int a,int b=1,int c=1)
{
	return a;
}

int main()
{
	int m = 1,n = 5;
	cout<<func (m,n);//��Ч��func (m,n,1)
	cout<<func (m);//��Ч��func (m,1,1)
	//cout<<func (m,,n); �������ֻ�����ұ��������ɸ�����ȱʡ 
	return 0;
}
//����������ȱʡĿ��������߳���Ŀɲ����ԣ������д�õĺ�����Ҫ���ĳ���µĲ�������ԭ����Щ���øú�������䣬δ����Ҫʹ�������Ĳ�������ôΪ�˱������Щ�������������޸ģ��Ϳ���ʹ��ȱʡ���� 
