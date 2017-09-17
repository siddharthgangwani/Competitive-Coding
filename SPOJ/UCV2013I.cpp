#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int r,n;
	double ans;
	scanf("%d %d",&r,&n);
	while(r||n)
	{
		ans=r/(sin(M_PI/(2.0*n)));
		printf("%0.2f\n",ans);
		scanf("%d %d",&r,&n);
	}
	return 0;
}