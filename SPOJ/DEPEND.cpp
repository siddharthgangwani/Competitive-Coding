#include <bits/stdc++.h>

using namespace std;

typedef vector<string> vs;

map<string, vector<string> > m;
map<string,int> ind;
set<string> s;
set<string> mains;
queue<string> q;

int main() {
	int t,i,j,ans,found=1;
	char a[100009];
	string curr,temp;
	ans=0;
	while(scanf("%s",a)!=EOF)
	{
		if(found==1)
		{
			found=0;
			s.clear();
			curr=a;
			mains.insert(curr);
		}
		else
		{
			if(a[0]=='0')
			{
				found=1;
			}
			else
			{
				temp=a;
				if(s.find(temp)==s.end())
				{
					ind[curr]++;
					s.insert(temp);
					m[temp].push_back(curr);
				}
			}
		}
	}
	set<string>::iterator it;
	ans=0;
	for(it=mains.begin();it!=mains.end();it++)
	{
		temp=(*it);
		if(ind[temp]==0)
		{
			q.push(temp);
		//	ans++;	
		}
		//cout<<temp<<" "<<ind[temp]<<endl;
	}
	while(!q.empty())
	{
		curr=q.front();
		q.pop();
		ans++;
		for(i=0;i<m[curr].size();i++)
		{
			temp=m[curr][i];
			ind[temp]--;
			if(ind[temp]==0)
			{
				q.push(temp);
			//	ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}