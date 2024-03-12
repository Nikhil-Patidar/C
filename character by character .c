 // WAP ACCEPT A STRING AND PRINT to CHARACTER BY CHARACTER
 #include<stdio.h>
int main()
{
	char a[30];
	int i;
	printf("ENTER YOUR NAME:");
	fgets(a,sizeof(a),stdin);
	i=0;
	while(a[i]!='\0')
	{
		
		printf("%c\n",a[i]);
		i++;
	}
	return 0;
}  
