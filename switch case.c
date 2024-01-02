#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the any number 1-7=");
	scanf("%d",&ch);
		switch(ch)
	{
		case 1:
			printf("\n sunday");
			break;
		case 2:
			printf("\n monday");
			break;
		case 3:
			printf("\n tuesday");
			break;	
		case 4:
			printf("\nwednesday");
			break;
		case 5:
			printf("\n thursday");
			break;	
		case 6:
			printf("\n friday");
			break;	
		case 7:
			printf("\n saturday");
			break;
		default:
			printf("\n wrong choice");
			break;
	}
	
	return 0;

}
