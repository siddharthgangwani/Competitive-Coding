#include <iostream>

using namespace std;

int main() {
 	double t,n,z,u;
 	scanf("%lf",&t);
 	while(t--){
  		scanf("%lf",&n);
  		z=n/(n+1);
  		printf("%.8lf\n",z);
 	}
	return 0;
}