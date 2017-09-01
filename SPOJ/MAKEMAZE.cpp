#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

char grid[30][30];
int vis[30][30],m,n;
int x[]={-1,0,0,1};
int y[]={0,-1,1,0};

void bfs(int i1,int i2)
{
	int i,t1,t2;
	queue< pair<int,int> > q;
	pair<int,int> p;
	vis[i1][i2]=1;
	q.push(make_pair(i1,i2));
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(i=0;i<4;i++)
		{
			t1=p.first+x[i];
			t2=p.second+y[i];
			if((t1>=0)&&(t1<m)&&(t2>=0)&&(t2<n))
			{
				if((vis[t1][t2]==-1)&&(grid[t1][t2]=='.'))
				{
					vis[t1][t2]=1;
					q.push(make_pair(t1,t2));
				}
			}
		}
	}
}

int main() {
	int t,count,i,j,i1,i2,j1,j2,flag=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		getchar();
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				vis[i][j]=-1;
				scanf("%c",&grid[i][j]);
			}
			getchar();
		}
		count=0;
		i1=-1;
		i2=-1;
		j1=-1;
		j2=-1;
		flag=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(((i==0)||(i==m-1)||(j==0)||(j==n-1))&&(grid[i][j]=='.'))
				{
					count++;
					if(i1==-1)
					{
						i1=i;
						j1=j;
					}
					else if(i2==-1)
					{
						i2=i;
						j2=j;
					}
					if(flag==0)
					{
						bfs(i,j);
						flag=1;
					}
				}
			}
		}
		if((count==2)&&(vis[i1][j1]!=-1)&&(vis[i2][j2]!=-1))
		{
			printf("valid\n");
		}
		else
		{
			printf("invalid\n");
		}
	}
	return 0;
}