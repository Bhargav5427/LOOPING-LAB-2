#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	do
	{
		sum = sum + i;
		i++;
	}while(i<=n);
		printf("%d\n",sum);
}