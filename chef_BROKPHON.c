/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-Broken Telephone				*
* Algorithm : Brute Force					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>
int main()
{
	int t;
	long int n,count,n1,n2,n3;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%ld%ld%ld",&n,&n1,&n2);
		if(n2!=n1)
			count++;

		n=n-2;
		while(n--)
		{
			scanf("%ld",&n3);
			if((n2!=n3)||(n2!=n1))
			{
				count++;
			}
			n1=n2;
			n2=n3;
		}
		if(n1!=n2)
			count++;
		printf("%ld\n",count);
	}
	return 0;
	
}
