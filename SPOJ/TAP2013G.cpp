#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,q[100009],n[100009],i,j,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&q[i]);
	for(i=0;i<t;i++)
		scanf("%d",&n[i]);
	sort(q,q+t);
	sort(n,n+t);
	ans=0;
	i=0;
	j=0;
	while((i<t)&&(j<t))
	{
		if(n[j]>q[i])
		{
			i++;
			j++;
			ans++;
		}
		else
			j++;
	}
	printf("%d\n",ans);
	return 0;
}