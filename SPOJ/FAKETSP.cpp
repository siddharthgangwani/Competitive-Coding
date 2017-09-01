#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	char ch;
	double x1,x2,y1,y2,dist=0;
	while(1)
	{
		ch=getchar();
		if(ch==EOF)
			return 0;
		else if(ch=='(')
			break;
	}
	scanf("%lf, %lf)\n",&x1,&y1);
	while(1)
	{
		while(1)
		{
			ch=getchar();
			if(ch==EOF)
				return 0;
			else if(ch=='(')
				break;
		}
		scanf("%lf, %lf)\n",&x2,&y2);
		dist+=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
		x1=x2;
		y1=y2;
		printf("The salesman has traveled a total of %.3lf kilometers.\n",dist);
	}
	return 0;
}