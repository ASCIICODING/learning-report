#include <iostream>
using namespace std;
int main()
{
	int *pn,*arr,**a;
	int i = 5,j;
	pn = new int;
	*pn = 5;
	cout<<"*pn="<<*pn<<endl; 
	delete pn;
	//һ������ 
	arr = new int [5*i];
	for (j=0;j<5*i;j++)
	{
		arr[j] = j;
	}
	for (j=0;j<5*i;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	delete []arr;
	//һά���� 
	a = new int* [2];
	for (i=0;i<2;i++)
	{
		a[i] = new int[3];
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			a[i][j] = i*j;
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
	for (i=0;i<2;i++)
	{
		delete []a[i];
	}
	delete []a;
	//��ά���� 
	return 0;
}
