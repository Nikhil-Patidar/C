/*
// with argument no return 
#include<stdio.h>
void rev(int); // function prototype
int main()
{
    int i;
    printf("Enter number to find reverse=");
    scanf("%d",&i);
    rev(i);
    return 0;
}
void rev(int i)
{
    int rev =0;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    printf("Reverse=%d",rev);
} */

// with argument with return 
#include<stdio.h>
int rev(int); // function prototype
int main()
{
    int i,result;
    printf("Enter number to find reverse=");
    scanf("%d",&i);
   	result= rev(i);
    printf("Reverse of number=%d",result);
   
}
int rev(int i)
{
    int rev =0;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    return(rev);
}  
  

