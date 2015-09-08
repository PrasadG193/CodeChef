#include<stdio.h>
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x);
 
long unsigned int n,i,k,temp,count=0;
int a[100000];     
 
int get_int()
{   register char c=gc();
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
 
 
inline void writeInt (int n)
{
        int N = n, rev, count = 0;
        rev = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
        while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
        while (count--) pc('0');pc('\n');
}
 
 
int findGCD(int a, int b)
{
if (b)
return findGCD(b, a % b);
else
return a;
}
 
int main()
{
	int t,n,i,res,q,l1,l2,p,s;
 
	t=get_int();
	while(t--){
		n=get_int();
		q=get_int();
		for(i=0;i<n;i++)
			a[i]=get_int();
		while(q--)
		{
			p=s=0;
			l1=get_int();
			l2=get_int();
			for(i=0;i<l1-1;i++)
				p=findGCD(p,a[i]);
			for(i=l2;i<n;i++)
				s=findGCD(s,a[i]);	
			writeInt(findGCD(p,s));
		}
	}
	return 0;
	
}