// write a function to check whether a given number to prime or not
// with argument no return type
#include<stdio.h>
void prime(int);// function prototype

int main()
{
   int i;
   printf("Enter number to check prime or not=");
   scanf("%d",&i);
   prime(i);// function calling
   return 0;
}
void prime(int i)// function defination
{
    int x,count=0;
    for(x=i;x<=i;x++)
    {
        if(x%2==0)
        count++;
    }
    if(count==2)
    printf("\n PRIME number");
    else
    printf("\n NOT PRIME NUMBER");
}
