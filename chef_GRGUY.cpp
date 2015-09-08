/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Gravity Guy	 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <vector>
#define gc getchar_unlocked

using namespace std;

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

char a[2][200010];

int find(int x)
{
	int i,cnt=0;
	if(a[x][0]=='#')
		return 999999;
	for(i=0;i<strlen(a[0]);i++)
	{
		if(a[x][i]=='#')
		{
			cnt++;
			x=(x+1)%2;
		}
	}
	return cnt;
}


int main()
{
	int t,r,i,cnt[2];
	t=fin();
	while(t--)
	{
		char f[]="000";
		scanf("%s",a[0]);
		scanf("%s",a[1]);

		for(i=0;i<strlen(a[0]);i++)
		{
			if(a[0][i]=='#')
				f[1]='1';
			if(a[1][i]=='#')
				f[2]='1';
			if(a[0][i]=='#' && a[1][i]=='#')
			{
				f[0]='1';
				printf("No\n");
				break;
			}
		}
		if(f[0]=='1')
			continue;
		if(f[1]=='0' || f[2]=='0')
		{
			printf("Yes\n0\n");
			continue;
		}
		r=min(find(0),find(1));
		printf("Yes\n%d\n",r);
	}
	return 0;
}
