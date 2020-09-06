#include<stdio.h>
main()
{
	int marks;
	printf("Enter your marks obtained :");
	scanf("%d", &marks);
	if(marks<40)
	{
	printf("you get 'Grade F' ");	
	}
	else if(marks>=40 && marks<=54)
	{
	printf("you get 'Grade D' ");	
	}
	else if(marks>=55 && marks<=69)
	{
	printf("you get 'Grade C' ");	
	}
	else if(marks>=70 && marks<=84)
	{
	printf("you get 'Grade B' ");	
	}
	else if(marks>=85 && marks<=100)
	{
	printf("you get 'Grade A' ");	
	}
	else
	{
		printf("Enter valid marks!!");
	}
	return 0;
}
