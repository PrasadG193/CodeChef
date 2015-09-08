/*Author: Prasad Ghangal
 * Title: Count Substring*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int t,n,k,q,l,r,i,j,x,y,count;
	char *cnt[100000];
	char a[100000];
	scanf("%d",&t);
	for(i=0;i<100000;i++)
	{
		cnt[i]=(char *)malloc(100000*sizeof(char));
	}
	while(t--)
	{
		x=y=0;
		scanf("%d%d%d",&n,&k,&q);
		scanf("%s",a);
		for(i=0;i<n;i++)
		{
			x=y=0;
			for(j=0;j<n;j++)
			{	
				if(j<i)
					cnt[i][j]='0';
				else
				{
					if(a[j]=='1')
						x++;
					if(a[j]=='0')
						y++;
					if((x>k)||(y>k))
						cnt[i][j]='1';	
					else
						cnt[i][j]='0';
				}
			}
		}
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<n;j++)
//				printf("%c ",cnt[i][j]);
//			printf("\n");
//		}
		while(q--)
		{
			count=0;
			scanf("%d%d",&l,&r);
			for(i=l-1;i<n;i++)
			for(j=0;j<r;j++)
				if(cnt[i][j]=='1')
					count++;
//			for(j=l;j<n;j++)
//				if(cnt[j][r-1]=='1')
//						count++;
//			printf("COUNT=%d\n",count);
			l=r-l+1;
	//		printf("count=%d\n",l);
			printf("%d\n",(l*(l+1)/2)-count);
		}
	}
	return 0;
}
