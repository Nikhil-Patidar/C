/*#include<stdio.h>
int main()
{
	char a[50],b[50],c[100];
	int i,j,k;
	printf("\n ENTER YOUR FIRST STRING=");
	fgets(a,sizeof(a),stdin);
	printf("\n ENTER YOUR SECOND STRING=");
	fgets(b,sizeof(b),stdin);
	i=j=0;
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]='\0';
	printf("\n CONCATENATED STRING=%s",c);
	return 0;
}*/


#include <stdio.h>

#define MAX 100

int main()
{
    char text1[MAX],text2[MAX];
    int i, j;

    printf("\n Enter first string: ");
    gets(text1);
    printf("\n Enter second string: ");
    gets(text2);

    i=0;
    while(text1[i] != '\0')
    
    {
    
        i++;
    }

    j = 0;
    while(text2[j] != '\0')
    {
        text1[i] = text2[j];
        i++;
        j++;
    }

    text1[i] = '\0';

    printf("\n Concatenated strings = %s", text1);

    return 0;
}
