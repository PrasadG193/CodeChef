/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <queue>
#include <string.h>
#define gc getchar_unlocked
using namespace std;


int fin()
{
	int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

long int finl()
{
	long int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

class abc
{
	public:
	long int v,level;
	abc(long int x,long int y)
	{
		v=x;
		level=y;
	}
};


char visited[10000010];
long int a,b;

long int bfs()
{
//	visited[a]='1';
	queue<abc> q;
	q.push(abc(a,0));
	abc tmp(0,0);
	while(!q.empty())
	{
		tmp=q.front();
		q.pop();
		visited[tmp.v]='1';
		if(tmp.v==b)
			return tmp.level;

		if(tmp.v/2 > 0 && visited[tmp.v/2]!='1')
		{
			q.push(abc(tmp.v/2,tmp.level+1));
		}
		if(tmp.v*2 <= b && visited[tmp.v*2]!='1')
		{
			q.push(abc(tmp.v*2,tmp.level+1));
		}
	}
	return -1;

}


int main()
{
	int t;
	t=fin();
	while(t--)
	{
	memset(visited,'0',sizeof(visited));
		a=finl();
		b=finl();
		printf("%ld\n",bfs());
	}

	return 0;
}
