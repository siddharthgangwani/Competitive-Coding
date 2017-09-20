#include <iostream>

using namespace std;

int main() {
	int t;
	long long int sum,num;
	char op;
	scanf("%d",&t);
	while(t--)
	{
		char ch;
		sum=0;
		scanf("%lld",&num);
		sum=sum+num;
		scanf("%c",&ch);
		while(ch!='=')
		{
			if(ch=='+')
			{
				scanf("%lld",&num);
				sum=sum+num;
			}
			else if(ch=='-')
			{
				scanf("%lld",&num);
				sum=sum-num;
			}
			else if(ch=='*')
			{
				scanf("%lld",&num);
				sum=sum*num;
			}
			else if(ch=='/')
			{
				scanf("%lld",&num);
				sum=sum/num;
			}
			scanf("%c",&ch);
		}
		printf("%lld\n",sum);
	}
	return 0;
}