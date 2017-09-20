#include <iostream>
#include <cstring>

using namespace std;

char maya[20][15] = {
	"S", ".", "..", "...", "....",
	"-", ". -", ".. -", "... -", ".... -",
	"- -", ". - -", ".. - -", "... - -", ".... - -",
	"- - -", ". - - -", ".. - - -", "... - - -", ".... - - -"
};

int pwr[7] = {1, 20, 360, 7200, 144000, 2880000, 57600000};

int main() {
	int n,i=0,j=0;
	char a[100];
	long long int ans=0;
	while(scanf("%d",&n)==1)
	{
		getchar();
		if(n==0)
		{
			break;
		}
		ans=0;
		for(i=0;i<n;i++)
		{
			gets(a);
			for(j=0;j<20;j++)
			{
				if(strcmp(a,maya[j])==0)
				{
					break;
				}
			}
			ans+=(pwr[n-1-i]*(j));
		}
		printf("%lld\n",ans);
	}
	return 0;
}