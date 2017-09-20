#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,count,j=1;
	long long int ans;
	scanf("%d",&n);
	while(n!=0)
	{
		count=n-2;
		ans=pow(n,count);
		printf("Case %d, N = %d, # of different labelings = %lld\n",j,n,ans);
		j++;
		scanf("%d",&n);
	}
	return 0;
}