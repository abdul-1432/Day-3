// array declaration, initialization, processing
#include <stdio.h>
void main()
{
	int x[10]={10,20,30,40,50,60,70,80,90,100}, c,n;
	//int x[]={5,7,8,9,3,5}, c, n;
	n=sizeof(x)/sizeof(x[0]);
	for(c=0;c<n;c++)
	{
		printf("\n %d",x[c]);
	}
}
