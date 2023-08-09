#include<stdio.h>

main()

{
	int i,n=1;
	printf("enter value for =");
	scanf("%d",&i);
	
	do
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i--;
	}while(i>=n);	
}
