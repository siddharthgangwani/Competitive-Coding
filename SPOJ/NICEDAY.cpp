#include <bits/stdc++.h>

using namespace std;

int tree[100009],n;
pair< int, pair<int,int> > p[100009];

int get(int idx)
{
    int t1=1e9;
    while(idx>0)
    {
        t1=min(t1,tree[idx]);
        idx-=(idx & -idx);
    }
    return t1;
}

void upd(int idx,int val)
{
    while(idx<=n)
    {
        tree[idx]=min(tree[idx],val);
        idx+=(idx & -idx);
    }
    return;
}

int main() {
    int i,j,t1,t2,t3,t4,ans,temp,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<=100000;i++)
            tree[i]=1e9;
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&p[i].first,&p[i].second.first,&p[i].second.second);
        }
        sort(p,p+n);
        ans=0;
        for(i=0;i<n;i++)
        {
            t1=p[i].second.first;
            t2=p[i].second.second;
            temp=get(t1-1);
            if(temp>t2)
                ans++;
            upd(t1,t2);
        }
        printf("%d\n",ans);
    }
	return 0;
}
