/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Chef and the Wildcard Matching		*
* Category : -							*
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
	int t,l,i;
	char a[15],b[15],f;
	t=fin();
	while(t--)
	{
		f='0';
		scanf("%s",a);
		scanf("%s",b);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='?' || b[i]=='?')
				continue;
			if(a[i]!=b[i])
			{
				f='1';
				break;
			}
		}
		if(f=='1')
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
