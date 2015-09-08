#include<stdio.h>

int main()
{
	int t,x,y,k,n,p,c;
	char flag;
	scanf("%d",&t);
	while(t--)
	{
		flag='0';
		scanf("%d%d%d%d",&x,&y,&k,&n);
		while(n--)
		{
			scanf("%d%d",&p,&c);
			if((p>=(x-y))&&(c<=k))
				flag='1';
		}
		if(flag=='1')
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
	}
	return 0;
}
