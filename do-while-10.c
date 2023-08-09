#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("Enter number =\n\n");
	scanf("%d",&n);
	
	printf("multiplication table of %d =\n",n);
	
	
	do
	{
		printf("%d x %d =%d\n",n,i,i*n);
		i++;
	}while(i<=10);
}