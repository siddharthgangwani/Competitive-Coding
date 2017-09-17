#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,count=1;
	double p1,p0,t,p;
	double ans,k;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf %lf %lf %lf",&p0,&p1,&t,&p);
		k=log(p1/p0)/t;
		ans=log(p/p0)/k;
		printf("Scenario #%d: %.2lf\n",count,ans);
		count++;
	}
	return 0;
}