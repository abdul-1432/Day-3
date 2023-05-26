// array declaration, initialization, processing
#include <stdio.h>
void main()
{
	int x[10], c;
	printf("Enter 10 values for the array :");
	for(c=0;c<10;c++)
	{
		scanf("%d",&x[c]);
	}
	printf("\n Given values are:");
	for(c=0;c<10;c++)
	{
		printf("\n %d",x[c]);
	}
}
