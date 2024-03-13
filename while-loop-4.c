#include<stdio.h>

main()
{
	//print odd numbers from N to 1 using a while loop.
	
	int i = 1,n;
	
	printf("enter value n=");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==1)
		{
			printf("%d\n",n);
		}
		n--;
	}
	

}