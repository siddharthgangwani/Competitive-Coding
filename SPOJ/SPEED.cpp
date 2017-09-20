#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main() {
    int t,m,n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        ans=m>n?m-n:n-m;
        m*=(m<0?-1:1);
        n*=(n<0?-1:1);
        printf("%d\n",ans/(gcd(m,n)));
    }
    return 0;
}
