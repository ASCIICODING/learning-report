#include <stdio.h>
#include <stdlib.h>

double Least_Squares (double x[],double y[],int size,double n)
{
	double avex = 0,avey = 0,sumx = 0,sumy = 0,upa = 0,downa = 0,a = 0,b = 0,forecast;
	int i;
	for (i=0;i<size;i++)
	{
		sumx += x[i];
		sumy += y[i];
	}
	avex = sumx/size;
	avey = sumy/size;
	for (i=0;i<size;i++)
	{
		upa += (x[i]-avex)*(y[i]-avey);
		downa += (x[i]-avex)*(x[i]-avex);
	}
	a = upa/downa;
	b = avey-a*avex;
	forecast = a*n+b;
	return forecast;
}

int main()
{
	int i = 0,num,input;
	double x[200],y[200],n,forecast;
	FILE *fp = fopen("ex1data1.txt","r");
	while (input!=-1)
	{
		input = fscanf (fp,"%lf,%lf\n",&x[i],&y[i]);
		
		i++;
	}
	fclose(fp);
	num = i-1;
	printf ("population is ");
	scanf ("%lf",&n);
	forecast = Least_Squares (x,y,i-1,n);
	printf ("the predicted profit of a food truck is %lf",forecast);
	return 0;
}


