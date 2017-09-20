#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

struct nodes
{
	int zero,one,two;	
} tree[400009];

int lazy[400009],a0,a1,a2;

void build(int start,int end,int node)
{
	if(start==end)
	{
		tree[node].zero=1;
		tree[node].one=0;
		tree[node].two=0;
	}
	else
	{
		int mid=(start+end)/2;
		build(start,mid,2*node);
		build(mid+1,end,2*node+1);	
		tree[node].zero=tree[2*node].zero+tree[2*node+1].zero;
		tree[node].one=tree[2*node].one+tree[2*node+1].one;
		tree[node].two=tree[2*node].two+tree[2*node+1].two;
	}
}

void update(int start,int end,int node,int l,int r)
{
	if(lazy[node]!=0)
	{
		if(lazy[node]==1)
		{
			a0=tree[node].zero;
			a1=tree[node].one;
			a2=tree[node].two;
			tree[node].zero=a2;
			tree[node].one=a0;
			tree[node].two=a1;
		}
		else if(lazy[node]==2)
		{
			a0=tree[node].zero;
			a1=tree[node].one;
			a2=tree[node].two;
			tree[node].zero=a1;
			tree[node].one=a2;
			tree[node].two=a0;
		}
		if(start!=end)
		{
			lazy[2*node]=(lazy[node]+lazy[2*node])%3;
			lazy[2*node+1]=(lazy[node]+lazy[2*node+1])%3;
		}
		lazy[node]=0;
	}
	if((start>end)||(l>end)||(r<start))
		return;
	if((start>=l)&&(r>=end))
	{	
		a0=tree[node].zero;
		a1=tree[node].one;
		a2=tree[node].two;
		tree[node].zero=a2;
		tree[node].one=a0;
		tree[node].two=a1;
		if(start!=end)
		{
			lazy[2*node]=(1+lazy[2*node])%3;
			lazy[2*node+1]=(1+lazy[2*node+1])%3;
		}
		return;
	}
	int mid=(start+end)/2;
	update(start,mid,2*node,l,r);
	update(mid+1,end,2*node+1,l,r);
	tree[node].zero=tree[2*node].zero+tree[2*node+1].zero;
	tree[node].one=tree[2*node].one+tree[2*node+1].one;
	tree[node].two=tree[2*node].two+tree[2*node+1].two;
}

nodes query(int start,int end,int node,int l,int r)
{
	nodes result;
	result.zero=result.one=result.two=0;
	if((start>end)||(start>r)||(end<l))
		return result;
	if(lazy[node]!=0)
	{
		if(lazy[node]==1)
		{
			a0=tree[node].zero;
			a1=tree[node].one;
			a2=tree[node].two;
			tree[node].zero=a2;
			tree[node].one=a0;
			tree[node].two=a1;
		}
		else if(lazy[node]==2)
		{
			a0=tree[node].zero;
			a1=tree[node].one;
			a2=tree[node].two;
			tree[node].zero=a1;
			tree[node].one=a2;
			tree[node].two=a0;
		}
		if(start!=end)
		{
			lazy[2*node]=(lazy[node]+lazy[2*node])%3;
			lazy[2*node+1]=(lazy[node]+lazy[2*node+1])%3;
		}
		lazy[node]=0;
	}
	if((start>=l)&&(r>=end))
		return tree[node];
	int mid=(start+end)/2;
	nodes p1=query(start,mid,2*node,l,r);
	nodes p2=query(mid+1,end,2*node+1,l,r);
	result.zero=p1.zero+p2.zero;
	result.one=p1.one+p2.one;
	result.two=p1.two+p2.two;
	return result;
}

int main() {
	int i,j,n,q,t1,t2,t3;
	nodes ans;
	scanf("%d %d",&n,&q);
	build(0,n-1,1);
	while(q--)
	{
		scanf("%d %d %d",&t1,&t2,&t3);
		if(t1==0)
		{
			update(0,n-1,1,t2,t3);
		}
		else if(t1==1)
		{
			ans=query(0,n-1,1,t2,t3);
			printf("%d\n",ans.zero);
		}
	}
	return 0;
}