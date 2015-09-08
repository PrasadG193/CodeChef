/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Chef and Cube 				*
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
	int t;
	char a[6][10],flag='0';
	t=fin();
	while(t--)
	{
		flag='0';
		for(int i=0;i<6;i++)
			scanf("%s",a[i]);
		for(int i=0;i<2;i++)
		{
			if(strcmp(a[i],a[2])==0 || strcmp(a[i],a[3])==0)
				if(strcmp(a[i],a[4])==0 || strcmp(a[i],a[5])==0)
					flag='1';
	
			if(flag=='1')
				break;
		}
		if(flag=='1')
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}
