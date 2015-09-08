#include<stdio.h>
#include<string.h>
int main()
{
	int t,a[26],i,cnt,j,max1,n,ind;
	char s[1000];
	
	scanf("%d",&t);
	while(t--)
	{
		max1=cnt=0;
		memset(a,0,sizeof(int)*26);
		scanf("%s",s);
		n=strlen(s);
		for(j=0;j<n;j++)
		{	
			memset(a,0,sizeof(int)*26);
	//				a[ind]++;
			cnt=0;
			
			for(i=j;i<n;i++){
				ind=(int)(s[i])-97;
				a[ind]++;
				if(a[ind]==2){
					break;
				}
				else
					cnt++;
				if(cnt>max1)
					max1=cnt;
		}
		}
	//	printf("%d",(int)('a'));
		//for(i=0;i<26;i++)
		//	printf("%d ",a[i]);
		printf("%d\n",max1);
	}
	return 0;
}
