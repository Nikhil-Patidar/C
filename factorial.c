        //WAP TO FIND FACTORIAL OF GIVEN NUMBER


#include<stdio.h>
int main()
{
    int i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&i);
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("factorial=%d\n",fact);
    return 0;
    
}
