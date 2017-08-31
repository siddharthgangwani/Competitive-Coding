#include <bits/stdc++.h>

using namespace std;

int a[4200000],tree[4200000],win[4200000];
char s[10];

void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=start;
		win[start]=0;
		return;
	}
	int mid=(start+end)/2;
	build(2*node,start,mid);
	build(2*node+1,mid+1,end);
	tree[node]=(a[tree[2*node]]>a[tree[2*node+1]])?tree[2*node]:tree[2*node+1];
	win[tree[node]]++;
	return;
}

void update(int node,int start,int end,int idx)
{
	if(start>idx || end<idx)
		return;
	if(start==end)
	{
		tree[node]=start;
		return;
	}
	int mid=(start+end)/2;
	update(2*node,start,mid,idx);
	update(2*node+1,mid+1,end,idx);
	win[tree[node]]--;
	tree[node]=(a[tree[2*node]]>a[tree[2*node+1]])?tree[2*node]:tree[2*node+1];
	win[tree[node]]++;
	return;
}

int main() {
	int n,m,t,i,j,t1,t2,ans,t3;
	scanf("%d %d",&n,&m);
	t3=(1<<n);
	for(i=0;i<t3;i++)
		scanf("%d",&a[i]);
	build(1,0,t3-1);
	for(i=0;i<m;i++)
	{
		scanf("%s",s);
		if(s[0]=='R')
		{
			scanf("%d %d",&t1,&t2);
			t1--;
			a[t1]=t2;
			update(1,0,t3-1,t1);
		}
		else if(s[0]=='W')
		{
			t1=tree[1]+1;
			printf("%d\n",t1);
		}
		else if(s[0]=='S')
		{
			scanf("%d",&t1);
			t1--;
			printf("%d\n",win[t1]);
		}
	}
	return 0;
}