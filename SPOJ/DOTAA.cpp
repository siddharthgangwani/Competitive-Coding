#include <iostream>

using namespace std;

int main() {
	int count,t,n,m,D,a,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&D);
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>D)
			{
				if(a%D!=0)
					count+=a/D;
				else
					count=count+(a/D)-1;
			}
		}
		if(count>=m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}