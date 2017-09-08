#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ag;
vector<int> tom;
int a[2005][2005];

int lcs()
{
	int i,j;
	for(i=0;i<=ag.size();i++)
	{
		for(j=0;j<=tom.size();j++)
		{
			if((i==0)||(j==0))
			{
				a[i][j]=0;
			}
			else if(ag[i-1]==tom[j-1])
			{
				a[i][j]=a[i-1][j-1]+1;
			}
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
	}
	return a[ag.size()][tom.size()];
}

int main() {
	int t,i,j,ans,temp;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		ag.clear();
		tom.clear();
		while(1)
		{
			scanf("%d",&temp);
			if(temp==0)
				break;
			ag.push_back(temp);
		}
		while(1)
		{
			tom.clear();
			scanf("%d",&temp);
			if(temp==0)
				break;
			tom.push_back(temp);
			while(1)
			{
				scanf("%d",&temp);
				if(temp==0)
					break;
				tom.push_back(temp);
			}
			ans=max(ans,lcs());
		}
		printf("%d\n",ans);
	}
	return 0;
}