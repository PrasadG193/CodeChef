/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Equility 					*
* Algorithm : -					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define gc getchar_unlocked

long long int fin()
{
	long long int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int fint()
{
	int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int main()
{
	long long int a[50001],sum;
	int t,n;
	t=fint();
	while(t--)
	{
		sum=0;
		n=fint();
		for(int i=0;i<n;i++)
		{
			a[i]=fin();
			sum+=a[i];
		}
		sum=sum/(n-1);
		for(int i=0;i<n;i++)
		{
			printf("%lld ",sum-a[i]);
		}
		printf("\n");
	}
	return 0;
}
