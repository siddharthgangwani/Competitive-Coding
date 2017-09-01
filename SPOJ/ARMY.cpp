#include <iostream>

using namespace std;

int main() {
	int t,ng,nm,i,gf,mgf,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&ng,&nm);
		gf=0;
		mgf=0;
		for(i=0;i<ng;i++)
		{
			scanf("%d",&a);
			if(a>gf)
				gf=a;
		}
		for(i=0;i<nm;i++)
		{
			scanf("%d",&a);
			if(a>mgf)
				mgf=a;
		}	
		if(gf>=mgf)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
	return 0;
}