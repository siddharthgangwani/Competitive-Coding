#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int a[200][200],n,m,dis[200][200];
int x[]={-1,0,0,1};
int y[]={0,-1,1,0};

void bfs(int c,int d)
{
	int i,j,x1,y1;
	queue< pair<int,int> > q;
	pair<int,int> p;
	dis[c][d]=0;
	q.push(make_pair(c,d));
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			x1=p.first+x[i];
			y1=p.second+y[i];
			if((x1>=0)&&(x1<n)&&(y1>=0)&&(y1<m))
			{
				if(((dis[p.first][p.second]+1)<dis[x1][y1])&&(a[x1][y1]==0))
				{
					dis[x1][y1]=dis[p.first][p.second]+1;
					q.push(make_pair(x1,y1));
				}
			}
		}
	}
}

int main() {
	int t,i,j;
	char ch;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		getchar();
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%c",&ch);
				if(ch=='0')
					a[i][j]=0;
				else if(ch=='1')
					a[i][j]=1;
				dis[i][j]=10000000;
			}
			getchar();
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]==1)
					bfs(i,j);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j==m-1)
					printf("%d\n",dis[i][j]);
				else
					printf("%d ",dis[i][j]);
			}
		}
	}
	return 0;
}