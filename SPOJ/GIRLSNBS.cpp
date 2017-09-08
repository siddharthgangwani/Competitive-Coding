#include <iostream>

using namespace std;

int main() {
	int g,b,ans;
	scanf("%d %d",&g,&b);
	while(1)
	{
		if((g==-1)&&(b==-1))
		{
			break;
		}
		if((g==0)&&(b==0))
			printf("0\n");
		else if(g==0)
			printf("%d\n",b);
		else if(b==0)
			printf("%d\n",g);
		else if(g>b)
		{
			ans=g/(b+1);
			if(g%(b+1)>0)
				ans++;
			printf("%d\n",ans);
		}
		else
		{
			ans=b/(g+1);
			if(b%(g+1)>0)
				ans++;
			printf("%d\n",ans);
		}
		scanf("%d %d",&g,&b);
	}
	return 0;
}