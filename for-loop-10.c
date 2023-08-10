#include<stdio.h>

main()
{
	int i,n,multi=1;
	
	printf("Enter number =\n\n");
	scanf("%d",&n);
	
	printf("multiplication table of %d =\n\n",n);
	
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d =%d\n",n,i,i*n);
	}
}