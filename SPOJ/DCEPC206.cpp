#include <bits/stdc++.h>

using namespace std;

long long int bits[1000009],a[100009],n;

void upd(long long int idx,long long int val)
{
    while(idx<=1000003)
    {
        bits[idx]+=val;
        idx+=(idx & -idx);
    }
}

long long int get(long long int idx) 
{
    long long int t1=0;
    while(idx>0)
    {
        t1+=bits[idx];
        idx-=(idx & -idx);
    }
    return t1;
}

int main()
{
    long long int t,i,j,t1,t2,temp,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<=1000003;i++)
            bits[i]=0;
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        ans=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>0)
            {
                ans+=get(a[i]-1);
                upd(a[i],a[i]);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
