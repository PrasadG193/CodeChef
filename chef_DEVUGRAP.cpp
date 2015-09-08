/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Devu and Grapes				*
* Algorithm : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
using namespace std;

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


long long int pos(long long int a)
{
	if(a<0)
		a=a*(-1);
	return a;
}

long long int min1(long long int a,long long int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	int t,n;
	long long int tmp,total,p1,p2,k;
	t=fin();

	while(t--)
	{
		total=0;
		n=fin();
		k=finl();
		while(n--)
		{
			tmp=finl();
			p1=tmp/k;
			if(p1==0)
				p1=1;
			p2=p1+1;
			total=total+min1(pos(tmp-p1*k),pos(p2*k-tmp));
		}

		printf("%lld\n",total);
	}
	return 0;
}
