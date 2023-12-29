// ASSIGNING VALUE OF STRING

/*#include<stdio.h>
int main()
{
	char a[40];
    printf("\n ENTER YOUR NAME:");
    scanf("%s",&a);
	printf("\n YOUR NAME IS %s",a);
	return 0;
}*/


#include<stdio.h>
int main()
{
	char a[40];
    printf("\n ENTER YOUR NAME:");
    //scanf("%s",&a);
    gets(a);
	printf("\n YOUR NAME IS %s",a);
	return 0;
}


