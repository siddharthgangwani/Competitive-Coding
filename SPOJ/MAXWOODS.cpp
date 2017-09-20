#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int m,n,a[209][209],dp[2][209][209],ans;
char grid[209][209];

int comp(int r1,int c1,int s)
{
	if(grid[r1][c1]=='#')
		return 0;
	else if((r1<0)||(r1>=m)||(c1<0)||(c1>=n))
		return 0;
	else if(dp[s][r1][c1]!=-1)
		return dp[s][r1][c1];
	return dp[s][r1][c1]=(grid[r1][c1]=='T'?1:0)+max(comp(r1+1,c1,(s+1)%2),comp(r1,c1+(s==0?1:-1),s));
}

int main() {
	int i,j,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
			scanf("%s",&grid[i]);
		memset(dp,-1,sizeof(dp));
		ans=comp(0,0,0);
		printf("%d\n",ans);
	}
	return 0;
}