#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int i,j,t1,t2,t3,t4,n,t,ans;
	while(scanf("%lld",&n)!=EOF)
	{
		t1=n/9;
		t2=n%9;
		t2*=t2;
		ans=81*t1+t2;
		printf("%lld\n",ans);
	}
	return 0;
}