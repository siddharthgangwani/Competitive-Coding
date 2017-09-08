#include <iostream>
#include <cmath>

using namespace std;

const float g=9.806;

int main() {
    double pi=2*acos(0.0);
    int t,d,s,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&d,&s);
        float ans = (d*g)/(s*s);
        if(ans<=1.00)
        {
            ans = (asin(ans)*180.00)/(2*pi);
            printf("Scenario #%d: %.2f\n",i,ans);
        }
        else 
            printf("Scenario #%d: -1\n",i);
    }
    return 0;
}