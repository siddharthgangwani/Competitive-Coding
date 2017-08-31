#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	map<int,int> m;
	int n,k,i,j,homo,hetero,temp,size,totalcount=0;
	char a[100];
	homo=0;
	hetero=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",a,&k);
		if(a[0]=='i')
		{
			m[k]++;
			if(m[k]==1)
				hetero++;
			else if(m[k]>1)
				homo++;
		}
		else
		{
			if(m[k]>0)
			{
				m[k]--;
				if(m[k]<1)
					hetero--;
				else if(m[k]==1)
					homo--;
			}
		}
		if((homo>=1)&&(hetero>=2))
			printf("both\n");
		else if(hetero>=2)
			printf("hetero\n");
		else if(homo>=1)
			printf("homo\n");
		else
			printf("neither\n");
	}
	return 0;
}