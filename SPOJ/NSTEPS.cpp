#include <iostream>

using namespace std;

int main() {
	int N;
	int x,y;
	cin>>N;
	while(N!=0)
	{
		cin>>x>>y;
		if((x==y)&&(x>=0))
		{
			if((x%2)==0)
			{
				cout<<2*x<<"\n";
			}
			else
			{
				cout<<(2*x)-1<<"\n";
			}
		}
		else if(((x-y)==2)&&(x>=2))
		{
			if((x%2)==0)
			{
				cout<<x+y<<"\n";
			}
			else
			{
				cout<<x+y-1<<"\n";
			}
		}
		else
		{
			cout<<"No Number\n";
		}
		N--;
	}
	return 0;
}