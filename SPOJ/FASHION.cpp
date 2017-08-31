#include <iostream>

using namespace std;

int main() {
	int t,N,i,j,key;
	long sum;
	int a[1000],b[1000];
	cin>>t;
	while(t!=0)
	{
		sum=0;
		cin>>N;
		cin>>a[0];
		for(i=1;i<N;i++)
		{
			cin>>a[i];
			key=a[i];
			j=i-1;
			while((j>=0)&&(a[j]>key))
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=key;
		}
		cin>>b[0];
		for(i=1;i<N;i++)
		{
			cin>>b[i];
			key=b[i];
			j=i-1;
			while((j>=0)&&(b[j]>key))
			{
				b[j+1]=b[j];
				j--;
			}
			b[j+1]=key;
		}
		for(i=0;i<N;i++)
		{
			sum+=(a[i]*b[i]);
		}
		cout<<sum<<"\n";
		t--;
	}
	return 0;
}