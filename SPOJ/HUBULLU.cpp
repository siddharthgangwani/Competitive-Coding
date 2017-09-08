#include <iostream>

using namespace std;

int main() {
	long long int n;
	int t,turn;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %d",&n,&turn);
		if(turn)
			printf("Pagfloyd wins.\n");
		else
			printf("Airborne wins.\n");
	}
	return 0;
}