#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	double v,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&v);
		s=3*0.5*pow(16,1/3.0)*sqrt(3)*pow(v*v,1/3.0);
		printf("%.10lf\n",s);
	}
	return 0;
}