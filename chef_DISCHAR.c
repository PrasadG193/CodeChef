#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count,k;
	char str[100000];
	int val[26];
	scanf("%d",&t);
	while(t--)
	{
		memset(val,0,sizeof(val));
		count=0;
		scanf("%s",str);
		count=strlen(str);
		for(i=0;i<strlen(str);i++)
		{
			k=str[i]-97;
			val[k]++;
			if(val[k]>1)
				count--;
		}
		printf("%d\n",count);
	//	printf("%d",(int)('a'));
	}
	return 0;
}
