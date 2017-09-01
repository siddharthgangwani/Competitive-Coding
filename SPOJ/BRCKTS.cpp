#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

struct nodes
{
	//number of unmatched opening brackets, number of unmatched closing brackets
	int openb,closeb;
} tree[120009];

int a[30003];

void build(int start,int end,int node)
{
	if(start==end)
	{
		if(a[start]==1)
		{
			tree[node].openb=1;
			tree[node].closeb=0;
		}
		else if(a[start]==-1)
		{
			tree[node].openb=0;
			tree[node].closeb=1;
		}
	}
	else
	{
		int mid=(start+end)/2;
		build(start,mid,2*node);
		build(mid+1,end,2*node+1);
		tree[node].openb=tree[2*node].openb+tree[2*node+1].openb-min(tree[2*node].openb,tree[2*node+1].closeb);
		tree[node].closeb=tree[2*node].closeb+tree[2*node+1].closeb-min(tree[2*node].openb,tree[2*node+1].closeb);
	}
}

void update(int start,int end,int node,int idx)
{
	if(start==end)
	{
		if(tree[node].openb==1)
		{
			tree[node].openb=0;
			tree[node].closeb=1;
		}
		else if(tree[node].closeb==1)
		{
			tree[node].openb=1;
			tree[node].closeb=0;
		}
	}
	else
	{
		int mid=(start+end)/2;
		if((idx>=start)&&(idx<=mid))
		{
			update(start,mid,2*node,idx);
		}
		else
		{
			update(mid+1,end,2*node+1,idx);
		}
		tree[node].openb=tree[2*node].openb+tree[2*node+1].openb-min(tree[2*node].openb,tree[2*node+1].closeb);
		tree[node].closeb=tree[2*node].closeb+tree[2*node+1].closeb-min(tree[2*node].openb,tree[2*node+1].closeb);
	}
}

int main() {
	int n,m,i,j,t=10,c=1,t1;
	char s[30003];
	while(t--)
	{
		scanf("%d %s",&n,s);
		for(i=0;i<n;i++)
		{
			a[i]=(s[i]=='(')?1:-1;
		}
		build(0,n-1,1);
		scanf("%d",&m);
		printf("Test %d:\n",c);
		for(i=0;i<m;i++)
		{
			scanf("%d",&t1);
			if(t1==0)
			{
				if((tree[1].openb==0)&&(tree[1].closeb==0))
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
			{
				update(0,n-1,1,t1-1);
			}
		}
		c++;
	}
	return 0;
}