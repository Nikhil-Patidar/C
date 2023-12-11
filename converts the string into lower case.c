/* STRLWR FUNCTION (LOWER STRING)
THIS FUNCTION CONVERTS THE STRING INTO LOWER CASE */

 /*#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("ENTER YOUR STRING=");
	fgets(a,sizeof(a),stdin);
	
	printf("\n STRING IN LOWER CASE=%s",strlwr(a));
	return 0; 	
}*/
// CONVERT STRINF WITHOUT BUILT IN FUNCTION STRLWR()

/* C program to Convert String to Lowercase without using strlwr() */

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100];
  	int i;
 
  	printf("\n Please Enter a String to Convert into Lowercase :  ");
  	gets(Str1);
  	
  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The given String in Lower Case = %s", Str1);
  	
  	return 0;
}

