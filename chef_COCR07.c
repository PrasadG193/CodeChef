/*Author: Prasad Ghangal*/
#include<stdio.h>
#include<string.h>
#define gc getchar_unlocked
char a[1000000000];
int get()
{
	register char c=gc();
	while(c<'0'||c>'9')
	c=gc();
	int res=0;
	while(c>='0'&&c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int main()
{
	int t,d,n,k,i,count;
	char ch;
		count=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			d=get();
			if((d%2)&&(d<k)&&(a[d]!='1'))
				count++;
			a[d]='1';
		}
		printf("%d\n",count);
return 0;
}
