#include<stdio.h>
main()
{
	int marks,mm;
	//use mm for maximum maxrks
	printf("enter maximum marks:");
	scanf("%d",&mm);
	printf("\nEnter your marks obtained :");
	scanf("%d", &marks);
	//update marks by conerting maximum maxrks in 100 ie-finding percent
	marks=marks*100/mm;
	if(marks>100)
	{
		printf("invalid marks");
	}
	else if(marks<40)
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
	else
	printf("you get 'Grade A' ");	
	
	return 0;
}
