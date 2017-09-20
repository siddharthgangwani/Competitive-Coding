#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int a[110][110],b[110][110];
int r,c;

int solve(int i,int j)
{
	int t1,t2,t3,t;
	if((i>=r)||(j<0)||(j>=c))
	{
		return INT_MAX;
	}
	else if(b[i][j]!=-1)	
	{
		return b[i][j];
	}
	else
	{
		if(i!=r-1)
		{
			t1=solve(i+1,j-1);
			t2=solve(i+1,j);
			t3=solve(i+1,j+1);
			t1=min(t1,t2);
			t=min(t1,t3)+a[i][j];
		}	
		else
		{
			t=a[i][j];
		}
		b[i][j]=t;
		return t;
	}
}

int main() {
	int i,j,min=INT_MAX,temp;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=-1;
		}
	}
	for(i=0;i<c;i++)
	{
		temp=solve(0,i);
		if(temp<min)
		{
			min=temp;
		}
	}
	printf("%d\n",min);
	return 0;
}

