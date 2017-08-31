#include <iostream>

using namespace std;

int main() {
	int n,i,j,m,c,ans=0;
	int a[10007]={0};
	int b[105];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&b[i],&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&c);
			a[c]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		a[b[i]]=0;
	}
	for(i=0;i<10001;i++)
	{
		if(a[i]==1)
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}