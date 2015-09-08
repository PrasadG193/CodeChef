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

int main()
{
	int t,min,max;
	char a[110],b[110];
	t=fin();
	while(t--)
	{
		min=max=0;
		scanf("%s%s",a,b);
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]!=b[i])
			{
				max++;
				if(a[i]!='?' && b[i]!='?')
				min++;
			}
			if(a[i]=='?' && b[i]=='?')
				max++;
		}
		printf("%d %d\n",min,max);
	}

	return 0;
}
