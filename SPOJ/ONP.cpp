#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

int main() {
	stack<char> s;
	int t,i;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		while(!s.empty())
		{
			s.pop();
		}
		s.push('(');
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='(')
				s.push(a[i]);
			else if(a[i]==')')
			{
				printf("%c",s.top());
				s.pop();
				s.pop();
			}
			else if(isalpha(a[i]))
			{
				printf("%c",a[i]);
			}
			else
			{
				s.push(a[i]);
			}
		}
		while(!s.empty())
		{
			if(s.top()!='(')
			{
				printf("%c",s.top());
				s.pop();
			}
			else
				break;
		}
		printf("\n");
	}
	return 0;
}