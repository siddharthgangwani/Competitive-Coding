#include <iostream>
#include <cmath>
#include <algorithm>

#define PI 3.1415926535897931159979635

using namespace std;

int main() {
	int a,b;
	double h1,h2,r1,r2,ans;
	while(1)
	{
		scanf("%d %d",&a,&b);
		if((a==0)&&(b==0))
			break;
		r1=a/(2.0*PI);
		h1=b-2.0*r1;
		r2=min((a/2.0),(b/(2.0*(1.0+PI))));
		h2=a;
		ans=max(PI*r1*r1*h1,PI*r2*r2*h2);
		printf("%.3lf\n",ans);
	}
	return 0;
}