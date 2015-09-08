/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>


#define gc getchar_unlocked
#define ll unsigned long long

int fin()
{
	register char c=gc();
	int res=0;
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=10*res+(c-48);
		c=gc();
	}
	return res;
}

ll finl()
{
	register char c=gc();
	ll res=0;
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=10*res+(c-48);
		c=gc();
	}
	return res;
}

int main()
{
	int t,n;
	ll k,a,tmp;
	t=fin();
	double sum;
	while(t--)
	{
		sum=0;
		tmp=0;
		n=fin();
		k=finl();
		for(int i=0;i<n;i++)
		{
			a=finl();
			sum=sum+a;
			tmp+=a;
			if(tmp%k!=0)
			{
				sum++;
				tmp++;
			}
			else
				tmp=0;
		}
		printf("%.0lf\n",ceil(sum/k));
	}

}
