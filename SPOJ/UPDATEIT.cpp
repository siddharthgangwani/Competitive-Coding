#include <iostream>
#include <cstdio>

using namespace std;

int a[10009],temp;

int main() {
    int n,q,l,r,val,u,t,t2,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&u);
        for(i=0;i<=n;i++)
            a[i]=0;
        for(i=0;i<u;i++)
        {
            scanf("%d %d %d",&l,&r,&val);
            a[l]+=val;
            a[r+1]-=val;
        }
        temp=0;
        for(i=0;i<n;i++)
        {
            temp+=a[i];
            a[i]=temp;
        }
        scanf("%d",&q);
        for(i=0;i<q;i++)
        {
            scanf("%d",&t2);
            printf("%d\n",a[t2]);
        }
    }
	return 0;
}
