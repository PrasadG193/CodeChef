/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Codechef-MSTEP	 				*
* Category : AdHoc						*
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


class abc
{
	public:
	int x,y;
};

abc a[250010];

int main()
{
	int t,n,tmp,count,i,j;
	t=fin();
	while(t--)
	{
		count=0;
		n=fin();
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			tmp=fin();
			a[tmp].x=i;
			a[tmp].y=j;
		}
		for(i=1;i<n*n;i++)
		{
			count+=abs(a[i].x-a[i+1].x)+abs(a[i].y-a[i+1].y);
		}
		printf("%d\n",count)	;
	}
	return 0;
}
