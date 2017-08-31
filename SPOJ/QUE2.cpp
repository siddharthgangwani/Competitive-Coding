#include <bits/stdc++.h>
using namespace std;

int ans[10009],tree[40020];
pair<int,int> p[10009];

inline int scan()
{
    char c = getchar_unlocked();
    int x = 0;
    while(c<'0'||c>'9')
    {
        c=getchar_unlocked();
    }
    while(c>='0'&&c<='9')
    {
        x=(x<<1)+(x<<3)+c-'0';
        c=getchar_unlocked();
    }
    return x;
}

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node]=1;
        return;
    }
    int mid=(start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node]=tree[2*node]+tree[2*node+1];
}

void upd(int node,int start,int end,int idx)
{
    if(start==end)
    {
        tree[node]=0;
    }
    else
    {
        int mid=(start+end)/2;
        if(start<=idx && idx<=mid)
            upd(2*node,start,mid,idx);
        else
            upd(2*node+1,mid+1,end,idx);
        tree[node]=tree[2*node]+tree[2*node+1];
    }
}

int query(int node,int start,int end,int rem)
{
    if(start==end)
        return start;
    else
    {
        int mid=(start+end)/2;
        if(tree[2*node]>=rem)
            return query(2*node,start,mid,rem);
        else
            return query(2*node+1,mid+1,end,rem-tree[2*node]);
    }
}

int main()
{
    int i,j,t1,t2,t3,t4,n,t;
    t=scan();
    while(t--)
    {
        n=scan();
        for(i=0;i<n;i++)
            p[i].first=scan();
        for(i=0;i<n;i++)
            p[i].second=scan();
        sort(p,p+n);
        build(1,0,n-1);
        for(i=0;i<n;i++)
        {
            t1=query(1,0,n-1,p[i].second+1);
            ans[t1]=p[i].first;
            upd(1,0,n-1,t1);
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                printf("%d\n",ans[i]);
            else
                printf("%d ",ans[i]);
        }
    }
    return 0;
}
