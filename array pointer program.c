

// PROGRAM TO CHECK AND DISPLAY ARRAR ELEMENTS
/*
#include<stdio.h>
int main()
{
    int a[10],i,*p,size;
    printf("ENTER SIZE OF ARRAY ELEMNTS=");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("ENTER NUMBER=");
        scanf("%d",&a[i]);   
    }
    p=&a[0];// p=a
    printf("ARRY ELEMENTS ARE\n");
    for(i=0;i<size;i++)
    printf(" %d\t",*(p+i));
    
    return 0;
} */


// SUM OF ARRAY ELEMENT USING POINTERS
 /*#include<stdio.h>
int main()
{
    int a[10],i,*p,size,sum=0;
    printf("ENTER SIZE OF ARRAY ELEMNTS=");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("ENTER NUMBER=");
        scanf("%d",&a[i]);   
    }
    p=&a[0];// OR p=a
    for(i=0;i<size;i++)
    sum=sum+*(p+i);
    printf("\n sum of array element=%d",sum);
}  */


// program to count total even or odd numbers
#include<stdio.h>
int main()
{
    int a[10],i,*p,size,even=0,odd=0;
    printf("ENTER SIZE OF ARRAY ELEMNTS=");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("ENTER NUMBER=");
        scanf("%d",&a[i]);   
    }
    p=&a[0];// OR p=a
    for(i=0;i<size;i++)
    {
    	if(*(p+i)%2==0)
    	even++;
    	else
    	odd++;
	}
	printf("\n TOTAL EVEN NUMBER=%d",even);
	printf("\n TOLAT ODD NUMBER=%d",odd);
	return 0;
}
