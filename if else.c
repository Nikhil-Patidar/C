
			//wap to check whether an age is eligible to vote or not

#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n eligibler for voting");
	}
	else
	printf("\n not eligible for voting");
	return 0;
}
