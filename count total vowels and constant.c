 // WAP TO ACCEPT A STRING AND COUNT TOTAL VOWELS & CONSTANTS
 #include<stdio.h>
 int main()
 {
 	char a[125];
 	int i,vol=0,cons=0;
 	printf("ENTER YOUR NAME:");
 	//fgets(a,sizeof(a),stdin);
 	gets(a);
 	i=0;
 	while(a[i]!='\0')
 	{
 		if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122))
		{
if(a[i]=='a' ||a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')	
		 	vol++;
		 	else
		 	cons++;
		 	i++;
		}	
	}
	printf("\n TOTAL VOWELS=%d and TOTAL CONSONENT=%d",vol,cons);
	return 0;
 }
