/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
* Author : Prasad J Ghangal					*
* Title : Codechef-Tow Frnds @ Zoo				*
* Algorithm : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define gc getchar_unlocked

long long int fin()
{
	register char c=gc();
	long long int res=0;
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
	long long int f,m;
	scanf("%d",&t);
	while(t--)
	{
		f=fin();
		m=fin();
		if((f>m) || (m%f)!=0)
			printf("WRONG\n");
		else 
			printf("CORRECT\n");
			
	}
	return 0;
}
