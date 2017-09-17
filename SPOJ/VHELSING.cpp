#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	double ans,r,root_2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&r);
		root_2=sqrt(2);
		ans=8.0*(2.0-root_2)*r*r*r;
		printf("%.4lf\n",ans);
	}
	return 0;
}