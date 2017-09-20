#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t,n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=(ceil)(log10(n)/log10(2));
		ans++;
		printf("%d\n",ans);
	}
	return 0;
}