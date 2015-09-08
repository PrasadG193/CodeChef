/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
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

int a[1000010];

int main()
{
	int t,n,i,x,y,j,max1,H,tmp;
	t=fin();
	while(t--)
	{
		n=fin();
		H=fin();
		max1=0;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			x=fin();y=fin();
			for(j=x;j<=y;j++)		
			{
				a[j]++;
			}
		}
		i=0;
		tmp=0;
		for(j=0;j<H;j++)
			tmp+=a[j];
		max1=tmp;
		i=0;
		for(;j<n;j++)
		{
			tmp+=a[j];
			tmp-=a[i];
			i++;
			if(max1<tmp)
				max1=tmp;
		}
		printf("%d\n",(n*H-max1));
	}
	return 0;
}
