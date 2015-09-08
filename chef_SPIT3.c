/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Codechef-SPIT3 					*
* Algorithm : -					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked

int main()
{
	char a[101];
	char flag[3]={'0','0','0'},l,i;
	scanf("%s",a);
	l=strlen(a);
	if(l<5)
	{
		printf("NO\n");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(a[i]>='A' && a[i]<='Z')
				flag[0]='1';
			else if(a[i]>='a' && a[i]<='z')
				flag[1]='1';
			else if(a[i]>='0' && a[i]<='9')
				flag[2]='1';
		}
		if(flag[0]=='1' && flag[1]=='1' && flag[2]=='1')
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
