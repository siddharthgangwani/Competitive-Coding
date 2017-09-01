#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s1,s2;
	int l1,l2,l;
	while(1)
	{
		cin>>s1>>s2;
		if(s1=="*")
		{
			break;
		}
		l1=s1.size();
		l2=s2.size();
		l=max(l1,l2);
		if(l>l1)
		{
			s1=string(l-l1,'0')+s1;
		}
		if(l>l2)
		{
			s2=string(l-l2,'0')+s2;
		}
		if(s1==s2)
		{
			printf("=\n");
		}
		else if(s1>s2)
		{
			printf(">\n");
		}
		else
		{
			printf("<\n");
		}
	}
	return 0;
}