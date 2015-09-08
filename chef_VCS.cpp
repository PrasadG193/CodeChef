/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-VCS	 					*
* Algorithm : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <iostream>
#include <string.h>
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

int main()
{
	int t,m,n,k,a[102],tmp,cnt1,cnt2;
	t=fin();
	while(t--)
	{
		cnt1=cnt2=0;
		memset(a,0,sizeof(a));
		n=fin();
		m=fin();
		k=fin();
		m=m+k;
		while(m--)
		{
			tmp=fin();
			a[tmp]++;
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]>1)
				cnt1++;
			if(a[i]==0)
				cnt2++;
		}
		printf("%d %d\n",cnt1,cnt2);
	}	

	return 0;
}
