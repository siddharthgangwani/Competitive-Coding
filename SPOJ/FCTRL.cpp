#include <iostream>

using namespace std;

int main() {
	long T,N;
	int count=0,k=1,j=5;
	cin>>T;
	while(T!=0)
	{
		cin>>N;
		j=5;
		k=1;
		count=0;
		while(k!=0)
		{
			count=count+(N/j);
			j=j*5;
			k=N/j;
		}
		cout<<count<<"\n";
		T--;
	}
	return 0;
}