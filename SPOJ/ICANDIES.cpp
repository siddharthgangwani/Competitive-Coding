#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t1,t2,t3,t4,t,n,ans,cnt;
    scanf("%d",&t);
    cnt=0;
    while(t--)
    {
        scanf("%d",&n);
        ans=-1;
        t1=0;
        for(i=n-5;i>=0;i-=5)
        {
            if(i%3==0)
            {
                ans=i;
                break;
            }
        }
        cnt++;
        if(ans==-1 || ans<=0)
            printf("Case %d: -1\n",cnt);
        else
            printf("Case %d: %d\n",cnt,ans);
    }
    return 0;
}
