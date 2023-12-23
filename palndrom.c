    //WAP TO FIND PALINDROM OF GIVEN NUMBER

#include<stdio.h>
int main()
{
    int i,x,rev=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&i);
    x=i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==x)
    printf("PALINDROM NUMBER");
    else
    printf("NOT PALNDROM NUMBER");
    return 0;
    
}
