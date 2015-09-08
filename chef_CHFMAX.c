#include<stdio.h>
#include<string.h>
int main()
{
	int a[123],i,t,max,z;
	char s[1000],r;
	scanf("%d",&z);
	while(z--){
	memset(a,0,sizeof(a));
//	printf("%d",(int)('a'));
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		t=(int)(s[i]);
		a[t]++;
//		printf("%d  %d\n",t,a[t]);
	}
	i=97;
	max=a[i];
	r=i;
	while(i<=122)
	{
		if(max<a[i]){
			max=a[i];
			r=i;
		}
		i++;
	}
//	printf("max= %c",(r));
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==r)
			printf("?");
		else
			printf("%c",s[i]);
	}
	printf("\n");
	}
	return 0;
}
