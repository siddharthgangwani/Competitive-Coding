#include <iostream>

using namespace std;

int main() {
	long long int N;
	scanf("%lld",&N);
	if(N%10==0)
		printf("2\n");
	else
		printf("1\n%d\n",N%10);
	return 0;
}