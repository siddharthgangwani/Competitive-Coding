#include <iostream>

using namespace std;

int main() {
	int t;
	long long int n,row;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==1)
		{
			printf("poor conductor\n");
		}
		else
		{
			n--;
			if(n%5==0)
			{
				row=n/5;
			}
			else
			{
				row=n/5;
				row++;
			}
			if(row%2)
			{
				if((n%5==0)||(n%5==1))
				{
					if(n%5==1)
						printf("%lld W L\n",row);
					else
						printf("%lld W R\n",row);
				}
				else if(n%5==4)
				{
					printf("%lld M R\n",row);
				}
				else if(n%5==3)
				{
					printf("%lld A R\n",row);
				}
				else
				{
					printf("%lld A L\n",row);
				}
			}
			else
			{
				if((n%5==0)||(n%5==1))
				{
					if(n%5==1)
						printf("%lld W R\n",row);
					else
						printf("%lld W L\n",row);
				}
				else if(n%5==2)
				{
					printf("%lld M R\n",row);
				}
				else if(n%5==4)
				{
					printf("%lld A L\n",row);
				}
				else
				{
					printf("%lld A R\n",row);
				}
			}
		}
	}
	return 0;
}