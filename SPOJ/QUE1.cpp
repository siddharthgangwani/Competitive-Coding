#include <bits/stdc++.h>
using namespace std;

int ans[2000];
pair<int,int> p[2000];

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

int main()
{
    int i,j,t1,t2,t3,t4,temp,n,t;
    t=scan();
    while(t--)
    {
        n=scan();
        for(i=1;i<=n;i++)
            p[i].first=scan();
        for(i=1;i<=n;i++)
            p[i].second=scan();
        memset(ans,0,sizeof(ans));
        sort(p+1,p+1+n);
        for(i=1;i<=n;i++)
        {
            temp=0;
            for(j=1;j<=n;j++)
            {
                if(temp==p[i].second && ans[j]==0)
                {
                    ans[j]=p[i].first;
                    break;
                }
                else if(ans[j]==0)
                    temp++;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==n)
                printf("%d\n",ans[i]);
            else
                printf("%d ",ans[i]);
        }
    }
    return 0;
}
