#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

char s[100009],ch;

int main() {
	long long int m,n,l,i,t,j,t1,t2,ans,f;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%s",s);
		scanf("%lld %lld",&m,&n);
		l=strlen(s);
		t1=0;
		//t2=abs(m-n);
		ans=l;
		if(m<n)
		{
			t2=n-m;
			for(i=0;i<=l;i++)
			{
				if(s[i]=='a')
					t1++;
				else
				{
					ans=ans+(t1/m)*t2;
					t1=0;
				}
			}
			printf("%lld %lld\n",l,ans);
		}
		else if(m>n)
		{
			t2=m-n;
			for(i=0;i<=l;i++)
			{
				if(s[i]=='a')
					t1++;
				else
				{
					ans=ans-(t1/m)*t2;
					t1=0;
				}
			}
			printf("%lld %lld\n",ans,l);
		}
		else
		{
			printf("%lld %lld\n",l,l);	
		}
	}
	return 0;
}