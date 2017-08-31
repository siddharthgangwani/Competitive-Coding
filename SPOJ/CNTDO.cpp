#include <bits/stdc++.h>
using namespace std;

bool a[22000];
int a1[1009];

int main()
{
    int i,j,t,n,ans,t1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<21001;i++)
            a[i]=false;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a1[i]);
            a[a1[i]+10000]=true;
        }
        ans=0;
        for(i=0;i<n;i++)
        {
            if(a1[i]%2==0)
            {
                t1=a1[i]/2;
                if(a[t1+10000])
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}