/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Codechef-Chain of Doughnuts  				*
* Category : AdHoc						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

long int fin()
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

bool comp(int x,int y)
{
	return x>y;
}

int main()
{
	long int t,n,m,a[20010],count;
	int i,j;
	t=fin();
	while(t--)
	{
		count=0;
		n=fin();m=fin();
		for(i=0;i<m;i++)
		{
			a[i]=fin();
		}
		sort(a,a+m,comp);
		i=0;j=m-1;
		while(i<j)
		{
			if(a[j]==1)
			{
				a[i+1]+=a[i];
				a[i+1]++;
				i++;
				j--;
				count++;
			}
			else
			{
				a[i+1]+=a[i];
				a[j]--;
				i++;
				count++;
				if(a[j]==0)
					j--;
			}
		}
		printf("%ld\n",count);

	}
	return 0;
}
