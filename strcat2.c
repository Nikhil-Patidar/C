#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10],brr[10];

    printf("Enter 2 strings:\n");
    gets(arr);
    gets(brr);
    
    strcat(arr," ");
    strcat(arr,brr);

    printf("arr=%s",arr);
    printf("\nbrr=%s",brr);

    return 0;
}
//Here if user cannot give space after 1st string and if we print arr after concatenation then between both the strings space 
//prints automatically and it looks like a double word.