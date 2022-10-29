#include <stdio.h>
#include <stdlib.h>
int Multiply (int A[][7],int B[][6],int rowA,int columnA,int rowB,int columnB)
{
	int i,j,k;
	int array[rowA][columnB];
	for (i=0;i<rowA;i++)
	{
		for (j=0;j<columnB;j++)
		{
			array[i][j] = 0;
		}
	}
	for (i=0;i<rowA;i++)
	{
		for (j=0;j<columnB;j++)
		{
			for (k=0;k<rowB;k++)
			{
				array[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	for (i=0;i<rowA;i++)
	{
		for (j=0;j<columnB;j++)
		{
			printf ("%d ",array[i][j]);
		}
		printf ("\n");
	}
}

int Transpose(int A[][7],int rowA,int columnA)
{
	int AT[columnA][rowA];
	int i,j;
	for (i=0;i<rowA;i++)
	{
		for (j=0;j<columnA;j++)
		{
			AT[j][i] = A[i][j];
		}
	}
	for (i=0;i<columnA;i++)
	{
		for (j=0;j<rowA;j++)
		{
			printf ("%d ",AT[i][j]);
		}
		printf ("\n");
	}
}
int main()
{
	int A[4][7] = {{12,10,6,7,9,2,5},{2,4,1,3,1,12,6},{3,1,2,5,0,4,7},{5,6,7,8,9,10,2}};
	int B[7][6] = {{2,3,4,5,6,9},{5,6,7,8,3,4},{4,6,1,12,4,5},{5,3,5,10,9,0},{6,7,9,2,13,8},{9,1,6,0,0,3},{1,2,3,4,5,5}};
	printf ("A*B=\n");
	Multiply (A,B,4,7,7,6);
	printf ("\n");
	printf ("A的转置矩阵为\n");
	Transpose (A,4,7);
	return 0;
}
