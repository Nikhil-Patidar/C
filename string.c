/*How to read a line of text?
You can use the fgets() function to read a line of string. And, you can use puts() to display the string.

Example 2: fgets() and puts() */
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
} 
