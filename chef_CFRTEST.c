/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  					*
* Algorithm : 					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
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

int main()
{
	int t,n,c[101],count,d;
	t=fin();
	while(t--)
	{
		count=0;
		memset(c,0,sizeof(c));
		n=fin();
		while(n--)
		{
			d=fin();
			if(c[d]==0)
			{
				count++;
				c[d]++;
			}
				
		}
		printf("%d\n",count);
	}
	return 0;
}
