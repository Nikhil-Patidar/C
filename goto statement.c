	//WAP TO CHECK A NUMBER IS ODD OR EVEN USING GPTO STATEMENT
/*
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	if(a%2==0)
	goto even;
	else
	goto odd;
	even:
	printf("\nNUMBER IS EVEN");
	return 0;
	odd:
	printf("\nNUMBER IS ODD");
	return 0;	
}		*/



		//WAP TO PRINT FIRST "N"NATURAL NUMBERS.
		
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	printnum:
	printf("\n %d",i);
	i++;
	if(i<=n)
	goto printnum;
	return 0;
}















