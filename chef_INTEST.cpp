#include<stdio.h>
//#define gc getchar
 
#define gc getchar_unlocked
    long unsigned int n,i,k,temp,count=0;
 
int get_int()
{
register char c=gc();
while(c<'0'||c>'9')
    c=gc();
int ret=0;
while(c>='0' && c<='9')
{
ret=ret*10+(c-48);
c=gc();
}
return ret;
}
 
 
int main()
{
 
    scanf("%lu%lu",&n,&k);
    for(i=0;i<n;i++)
    {
        temp=get_int();
        if(temp%k==0)
            count++;
 
    }
    printf("%lu",count);
    return 0;
}