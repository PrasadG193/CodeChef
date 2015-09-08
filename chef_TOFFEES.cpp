/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codestorm Dist. of Toffees				*
* Algorithm : AdHoc						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define gc getchar_unlocked
using namespace std;

long int fin()
{
	register char c=gc();
	long int res=0;
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
	long int t,n,tmp,min1,max1;
	char flag;
	t=fin();
	while(t--)
	{
		flag='0';
		max1=0;min1=999999999;
		n=fin();
		while(n--)
		{
			tmp=fin();
			if(tmp<=min1)
				min1=tmp;
			if(tmp>=max1)
				max1=tmp;
		
			if(max1-min1 >= 2)
			{
				flag='1';
				break;
			}
		}
		if(flag=='0')
			printf("GOOD\n");
		else
			printf("BAD\n");
	}
	return 0;
}
