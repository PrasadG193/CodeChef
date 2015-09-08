/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-LCKYST	 				*
* Category : Math						*
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
	int t,flag;
	long long int n,n1,r;
	t=fin();
	while(t--)
	{
		flag=0;
		n=finl();
		while(flag==0)
		{
			n1=n;
			r=n1%10;
			n1=n1/10;
			while(r==0 && n1!=0)
			{
				r=n1%10;
				n1=n1/10;
			}
			if(r==5)
				n=n*4;
			else
				flag=1;
		} 	
		printf("%lld\n",n);
	}
	return 0;
}
