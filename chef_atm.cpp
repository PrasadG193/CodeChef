#include<stdio.h>

int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b)
	if(a%5==0.0)
	{
		b=b-(a+0.50);
	}
	printf("%.2lf",b);
return 0;
}
