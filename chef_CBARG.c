/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Chef and Memory Limit			*
* Algorithm : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
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


long int finl()
{
	long int res=0;
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

	int t,n;
	long int a,b;
	long long int total;
	t=fin();
	while(t--)
	{
		n=fin();
		a=finl();
		total=a;
		n--;
		while(n--)
		{
			b=finl();
			if(b>a)
				total+=(b-a);
			a=b;
		}
		printf("%lld\n",total);
	}

	return 0;
}
