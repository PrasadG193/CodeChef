/*Author: Prasad Ghangal
 * Title: Codechef-Digital Display*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	int a[10]={6,2,5,5,4,5,6,3,7,6},l,res=0,i;
	char s[100];
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		res=res+a[(s[i]-48)];
	}
	printf("%d",res);
	return 0;
}
