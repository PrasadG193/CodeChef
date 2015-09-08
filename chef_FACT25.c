/*Author: Prasad Ghangal
 * Title: Codechef-Factorial(codeERA)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long double *a;
	int t,n,i;
//	scanf("%d",&t);
	a=(long double*)malloc(sizeof(long double)*101);
	a[0]=a[1]=1;
	for(i=2;i<101;i++)
	{
		a[i]=i*a[i-1];
	}
/*	for(i=0;i<=100;i++)
	{
		printf("%Lf ",a[i]);
	}*/
	printf("%Lf\n",a[5]);
//	while(t--)
//	{
		
//	}
	free(a);
	return 0;
}
