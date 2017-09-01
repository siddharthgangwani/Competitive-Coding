#include <bits/stdc++.h>

using namespace std;

int tree[200020],a[50009];

void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=a[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=max(tree[2*node],tree[2*node+1]);
	}
	return;
}

int query(int node,int start,int end,int l,int r)
{
	if(end<l||start>r)
	{
		return 0;
	}
	if(start>=l&&end<=r)
	{
		return tree[node];
	}
	int mid=(start+end)/2;
	return max(query(2*node,start,mid,l,r),query(2*node+1,mid+1,end,l,r));
}

int main() {
	int t,i,j,m,n,t1,t2,l1,r1,ans;
	ans=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	build(1,0,n-1);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&l1,&r1);
		l1--;
		r1--;
		t1=query(1,0,n-1,l1,r1-1);
		if(t1==a[l1])
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}