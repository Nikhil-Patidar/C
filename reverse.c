
#include<stdio.h>
int main()
{
    int i,rev=0;
    printf("Enter the number\n");
    scanf("%d",&i);
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    printf("REVESE OF NUMBER=%d",rev);
    return 0;
}
