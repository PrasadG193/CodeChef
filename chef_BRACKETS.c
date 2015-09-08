#include<stdio.h>
#include<string.h>

int findMax(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int t,i,max,max1,max2;
	char s[100000];
	scanf("%d",&t);
	while(t--)
	{
		max1=max=max2=0;
		scanf("%s",s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='(')
				max++;
			else
				max--;
			max1=findMax(max1,max);
		}
		max2=max1;
		while(max1--)
			printf("%c",'(');
		while(max2--)
			printf("%c",')');
		printf("\n");
		
	}

	return 0;
}
