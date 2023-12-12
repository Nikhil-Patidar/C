
 // WAP ACCEPT A STRING AND PRINT TO LENGTH CHARACTER 
 #include<stdio.h>
int main()
{
	char a[50];
	int i;
	printf("\nENTER YOUR NAME:");
	fgets(a,sizeof(a),stdin);
	i=0;
	while(a[i]!='\0')
	i++;
	printf("\n TOTAL NUMBER OF CHARACTERS IS=%d",i);
	return 0;
} 


