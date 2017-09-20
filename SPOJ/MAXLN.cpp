#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int T,i=1;
	double r,s;
	cin>>T;
	while(T!=0)
	{
		cin>>r;
		s=(4*r*r)+(0.25);
		cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<s<<"\n";
		i++;
		T--;
	}
	return 0;
}