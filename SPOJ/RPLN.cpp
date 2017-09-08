#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int orig[100008],tree[400032];
int a,b,n,q;

void build(int start, int end, int node)
{
	if(start==end)
		tree[node]=orig[start];
	else
	{
		int mid=(start+end)/2;
		build(start,mid,2*node);
		build(mid+1,end,2*node+1);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

void update(int start, int end, int value, int node,int index)
{
	if(start==end)
	{
		tree[node]+=value;
	}
	else
	{
		int mid=(start+end)/2;
		if((start<=index)&&(index<=mid))
		{
			update(start,mid,value,2*node,index);
		}
		else if((index>mid)&&(index<=end))
		{
			update(mid+1,end,value,2*node+1,index);
		}
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

int query(int start, int end, int node, int l, int r)
{
	if((r<start)||(end<l)||(start>end))
		return INT_MAX;
	else if((l<=start)&&(end<=r))
	{
		return tree[node];
	}
	int mid=(start+end)/2;
	int p1=query(start,mid,2*node,l,r);
	int p2=query(mid+1,end,2*node+1,l,r);
	int res=min(p1,p2);
	return res;
}

int main() {
	int t,i,j,ans,count=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(i=0;i<n;i++)
		{
			scanf("%d",&orig[i]);
		}
		build(0,n-1,1);
		ans=0;
		printf("Scenario #%d:\n",count);
		for(i=0;i<q;i++)
		{
			scanf("%d %d",&a,&b);
			ans=query(0,n-1,1,a-1,b-1);
			printf("%d\n",ans);
		}
		count++;
	}
	return 0;
}