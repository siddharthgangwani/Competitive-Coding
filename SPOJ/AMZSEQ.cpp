#include <iostream>

using namespace std;

int main() {
	int n,i;
	long long int ans;
	int one[50],two[50],zero[50];
	one[1]=1;
	zero[1]=1;
	two[1]=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		zero[i]=zero[i-1]+one[i-1];
		one[i]=zero[i-1]+one[i-1]+two[i-1];
		two[i]=two[i-1]+one[i-1];
	}
	ans=zero[n]+one[n]+two[n];
	printf("%lld\n",ans);
	return 0;
}