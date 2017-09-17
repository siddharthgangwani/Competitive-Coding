#include <iostream>

using namespace std;

int gcd(int x,int y)
{	
	int rem;
    while(x%y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }
    return y;
}

int main() {
    int n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        int a[n][3];
        long long vol=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        int hcf =a[0][0];
        for(i=0;i<n;i++)
        {
            hcf = gcd(hcf,a[i][0]);
            hcf = gcd(hcf,a[i][1]);
            hcf = gcd(hcf,a[i][2]);
        }
        for(i=0;i<n;i++)
        {
            vol+=(long long)((a[i][0]/hcf)*(a[i][1]/hcf)*(a[i][2]/hcf));
        }
        cout<<vol<<"\n";
    }
    return 0;
}