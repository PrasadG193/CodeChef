#include<stdio.h>
#include<string.h>
int main()
{
	int t,l1,l2,i,tmp,flg;
	int a[26],b[26];
	char s1[50000],s2[50000];
	scanf("%d",&t);
	while(t--)
	{
		flg=0;
		memset(a,0,sizeof(int)*26);
		memset(b,0,sizeof(int)*26);
		scanf("%s",s1);
		scanf("%s",s2);
		l1=strlen(s1);
		l2=strlen(s2);
		if(l1!=l2)
			printf("NO\n");
		else
		{
			for(i=0;i<l1;i++)
			{
				tmp=(int)(s1[i])-97;
				a[tmp]++;
				tmp=(int)(s2[i])-97;
				b[tmp]++;
			}
//			for(i=0;i<l2;i++)
//			{
//				tmp=(int)(s1[i])-97;
//				b[tmp]++;
//			}
			for(i=0;i<l1;i++)
			{
				if((a[i]-b[i])!=0)
				{
					flg=1;
					break;
				}
			}
			if(flg)
				printf("NO\n");
			else
				printf("YES\n");
		}
		
			
	}
	return 0;
}
