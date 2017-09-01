#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double x[n+1];
        double y[n+1];
        for(int i=0;i<n;i++)
        {
            double x1,y1;
            scanf("%lf%lf",&x1,&y1);
            x[i]=x1;
            y[i]=y1;
        }
        x[n]=x[0];
        y[n]=y[0];
        double area=0;
        for(int i=0;i<n;i++)
            area+=x[i]*y[i+1]-y[i]*x[i+1];
        area/=2;
        double cx=0,cy=0;
        for(int i=0;i<n;i++)
        {
            cx+=(x[i]+x[i+1])*(x[i]*y[i+1]-y[i]*x[i+1]);  
            cy+=(y[i]+y[i+1])*(x[i]*y[i+1]-y[i]*x[i+1]);
        }
        cy/=(6*area);
        cx/=(6*area);
        printf("%.2lf %.2lf\n",cx,cy);
    }
	return 0;
}