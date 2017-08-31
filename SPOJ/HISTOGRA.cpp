#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

long long int a[100009];

int main() {
	long long int temp,ans;
	long long int i,j,n,t;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		stack<int> s;
		temp=0;
		ans=0;
		for(i=0;i<n;)
		{
			if(s.empty()||(a[i]>=a[s.top()]))
			{
				s.push(i);
				i++;
			}
			else
			{
				t=s.top();
				s.pop();
				temp=a[t]*(s.empty()?i-0:i-1-s.top());
				ans=max(temp,ans);
			}
		}
		while(!s.empty())
		{
			t=s.top();
			s.pop();
			temp=a[t]*(s.empty()?i-0:i-1-s.top());
			ans=max(ans,temp);
		}
		printf("%lld\n",ans);
	}
	return 0;
}