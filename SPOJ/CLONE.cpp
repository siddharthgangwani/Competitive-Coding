#include <iostream>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
	map<string,int> ma;
	char a[25];
	int n,m,i,temp;
	scanf("%d %d",&n,&m);
	while(1)
	{
		if((n==0)&&(m==0))
		{
			break;
		}
		temp=0;
		i=0;
		int b[n+2];
		for(i=0;i<n+2;i++)
		{
			b[i]=0;
		}
		ma.clear();
		for(i=0;i<n;i++)
		{
			scanf("%s",&a);
			if(ma.find(a)==ma.end())
			{
				ma.insert(make_pair(a,1));
			}
			else
			{
				ma[a]++;
			}
		}	
		map<string,int>::iterator it;
		for(it=ma.begin();it!=ma.end();it++)
		{
			temp=it->second;
			b[temp]++;
		}
		for(i=1;i<=n;i++)
		{
			printf("%d\n",b[i]);
		}
		scanf("%d %d",&n,&m);
	}
	return 0;
}