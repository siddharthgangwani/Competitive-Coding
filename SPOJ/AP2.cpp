#include <iostream>

using namespace std;
 
int main() {
	int T,i;
	long long int x,y,z,a,d,n;
	cin>>T;
	while(T!=0)
	{
		cin>>x>>y>>z;
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		cout<<n<<"\n";
		for(i=0;i<n;i++)
		{
			cout<<(a+(i*d))<<" ";
		}
		cout<<"\n";
		T--;
	}
	return 0;
}