#include<stdio.h>

main()
{
	// print leap years between two given numbers using a while loop.
	
	int s,e,year;
	
	printf("enter the any s year=");
	scanf("%d",&s);
	
	printf("enter the any e year=");
	scanf("%d",&e);
	
	printf("leap year between %d and %d =\n",s,e);
	year = s;
	
	while(year <= e)
	{
		if(year % 4 == 0)
		{
			printf("%d \n",year);
		}
		year++;
	}   
	
	
}