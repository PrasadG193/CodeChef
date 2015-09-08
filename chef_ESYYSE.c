/*Author: Prasad Ghangal
 * Title: Codechef_Lucky Palindrome*/
#include<stdio.h>

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2)
			n--;
		printf("%d\n",n);
	}
	return 0;
}
