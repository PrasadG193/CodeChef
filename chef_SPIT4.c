/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Array Operation 				*
* Algorithm : 							*
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
	int i,j,cnt=0,tmp;
	int n,m,a[100001],b[100001];
	char flag[100001];
	memset(flag,'0',sizeof(flag));
//	scanf("%d%d",&n,&m);
	n=fin();
	m=fin();
	for(i=0;i<n;i++)
		a[i]=fin();
	for(i=n-1;i>=0;i--)
	{
		if(flag[a[i]]=='0')
		{
			cnt++;
			flag[a[i]]='1';
		}
		b[i]=cnt;
	}
	for(i=0;i<m;i++)
	{
		tmp=fin();
		printf("%d\n",b[tmp-1]);
	}
	return 0;
}
