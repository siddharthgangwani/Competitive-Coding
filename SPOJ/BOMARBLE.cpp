#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0) 
        	return 0;
        int temp=3*n+8;
        long long int  ans=5+1ll*temp*(n-1)/2;
        printf("%lld\n",ans);
    }
}