/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Chef and the XORed Number 			*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#define gc getchar_unlocked

int fin()
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


long long int finl()
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


int main()
{
	int t;
	long long int n,l,k;
	t=fin();
	while(t--)
	{
		n=finl();
		if(n==1)
		{
			printf("2\n");
			continue;
		}
		l=ceil(log(n)/log(2));
		k=pow(2,l);
		if(n==k-1)
		{
			k=pow(2,l-1)-1;
			printf("%lld\n",k);
		}
		else
			printf("-1\n");

	}
	return 0;
}
