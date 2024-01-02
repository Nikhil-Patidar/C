#include<stdio.h>
int main()
{
	//CHOICE BASE QWESTIon
	int a,b,ch;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	printf("\n1->add\n2->sub\n3->mul\n4->div\n5->nodulus\nEnter your choice\n");
	//printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n ADDITION=%d",(a+b));
			break;
		case 2:
			printf("\nSUBSTRACTION=%d",(a-b));
			break;
		case 3:
			printf("MULTIPLICATION=%d\n",(a*b));
			break;	
		case 4:
			printf("\nDIVISION=%d",(a/b));
			break;
		case 5:
			printf("MODULUS=%d\n",(a%b));
			break;
		default:
			printf("YOUR WRONG CHOICE");
			break;
	}
	
}
