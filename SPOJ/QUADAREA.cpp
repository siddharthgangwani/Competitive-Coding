#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	double a,b,c,d,s,area;
	scanf("%d",&T);
	while(T!=0)
	{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	s=(a+b+c+d)/2;
	area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
	printf("%0.2lf\n",area);
	T--;
	}
	return 0;
}