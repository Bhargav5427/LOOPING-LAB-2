#include<stdio.h>

main()

{
	int i,n;
	printf("enter value for =");
	scanf("%d",&i);
	
	for(n=1; i>=n; i--)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}	
}
