#include <iostream>

using namespace std;

int main() {
	int a[10001];
	int N,i,sum,avg,count;
	cin>>N;
	while(N!=-1)
	{
		sum=0;
		count=0;
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		avg=sum/N;
		if((sum%N)==0)
		{
			for(i=0;i<N;i++)
			{
				if(a[i]>avg)
				{
					count+=(a[i]-avg);
				}
			}
		cout<<count<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
		cin>>N;
	}
	return 0;
}