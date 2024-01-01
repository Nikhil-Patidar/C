		//PROGRAM TO FIND SUM OF EVEN NUMBER AND PRODUCT OF ODD NUMERS 

#include<stdio.h>
int main()
{
	int a[5],i,sum=0,pro=1;
	for(i=0;i<5;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		sum=sum+a[i];
		else
		pro=pro*a[i];
	}
	printf(" SUM OF TOTAL EVEN NUMBER=%d\n",sum); 
	printf(" PRODUCT OF TOTAL ODD NUMBER=%d",pro);  
	return 0; 
}
