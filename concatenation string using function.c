/* IT COMNACTENATES TWO STRINGS AND RETURNS THE CONCARTENATES STRING.SECOND STRING
IS CONCATENATED AT THE END OF FIRST STRING */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    
    printf("Enter the first string\n");
    fgets(a,sizeof(a),stdin);
    
    printf("Enter the second string\n");
    fgets(b,sizeof(b),stdin);
    
    strcat(a,b);
    
    printf("String obtained on concatenation is %s",a);
    
    return 0;

}
