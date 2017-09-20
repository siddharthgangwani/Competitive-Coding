#include <bits/stdc++.h>

using namespace std;

queue<int> q;
int par[20005],val[20005];
stack<int> s;

int main() {
	int t1,t2,i,j,t,n,a1,a2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(!s.empty())
			s.pop();
		while(!q.empty())
			q.pop();
		for(i=0;i<n;i++)
			par[i]=-1;
		q.push(1);
		par[1]=0;
		while(!q.empty())
		{
			t1=q.front();
			q.pop();
			if(t1==0)
			{
				while(1)
				{
					if(t1==1)
						break;
					s.push(val[t1]);
					t1=par[t1];
				}
				s.push(1);
				while(!s.empty())
				{
					printf("%d",s.top());
					s.pop();
				}
				printf("\n");
				break;
			}
			a1=(t1*10)%n;
			a2=t1*10+1;
			a2=a2%n;
			if(par[a1]==-1)
			{
				val[a1]=0;
				par[a1]=t1;
				q.push(a1);
			}
			if(par[a2]==-1)
			{
				val[a2]=1;
				par[a2]=t1;
				q.push(a2);
			}
		}
	}
	return 0;
}