#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	do
	{
		
		fact = fact * i;
		i++;
	}while(i<=n);
		printf("%d\n",fact);
}