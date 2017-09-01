#include <iostream>

using namespace std;

int main() {
	long long a,b,c,dis;
	int T;
	cin>>T;
	while(T!=0)
	{
		scanf("%lld %lld %lld",&a,&b,&c); 
		dis=(a*a)-(2*b);
		cout<<dis<<"\n";
		T--;
	}
	return 0;
}