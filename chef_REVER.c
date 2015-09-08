/*Author: Prasad Ghangal*/

#include<stdio.h>

int main()
{
	int t;
	char a[10100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		if((a[0]-48)%2)
			printf("ODD\n");
		else
			printf("EVEN\n");

	}
	return 0;
}
