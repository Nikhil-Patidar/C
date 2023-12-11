// COPY A STRING INTO ANOTHER STRING.
#include<stdio.h>
int main()
{
	char a[50],b[50];
	int i;
	printf("\n ENTER YOUR FIRST STRING=");
	fgets(a,sizeof(a),stdin);
	i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("\n COPIED Of STRING=%s",b);
	return 0;
}
