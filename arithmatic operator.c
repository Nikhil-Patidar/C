#include<stdio.h>
int main()
{
/*	int a,b;
	printf("Enter the numbers \n");
	scanf("%d%d",&a,&b);
	printf("addition of two operands is=%d\n",(a+b));
	printf("multiplication of two operands is=%d\n",(a*b));
	printf("substracton of two operands is=%d\n",(a-b));
	printf("divison of two operands is=%d\n",(a/b));
	printf("modulus of two operands is=%d\n",(a%b));
	return 0;*/
	//relational operators
	
/*	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("a<b is=%d\n",a<b);
	printf("a>b is=%d\n",a>b);
	printf("a<=b is=%d\n",(a<=b));
	printf("a>=b is=%d\n",(a>=b));
	printf("a==b is=%d\n",(a==b));
	printf("a!=b is=%d\n",(a!=b));
*/

//	ASSIGNMENT OPERATOR OF C LANGUAGE
	
/*	int a,b,c;
	a=4;
	printf("value of a=%d\n",a);
	b=2;
	printf("value of b=%d\n",b);
	a+=b;
	printf("value of a=%d\n",a);
	a-=4;
	printf("value of a=%d\n",a);
	a*=3;
	printf("value of a=%d\n",a);
	a+=a;
	printf("value of a=%d\n",a);
	b+=3;
	printf("value of a=%d\n",b);
	return 0;
*/	

		// INCREMENT AND DECREMENT OPERATOR OF C LANGUAGE
	/*	int a=5,b=10;
		printf("value of a=%d and value of b=%d\n",a,b);
		printf("value of a=%d \n ",a++);
		printf("value of a=%d \n ",++a);
		printf("value of b=%d \n ",++b);
		printf("value of b=%d \n ",b++);
		printf("last value =%d\n",(a++)+(++b));
	*/
	
	
					//SIZE OF OPERATOR	
					
	/*	int a=5;
		float b=6.5;	
		printf("\nsize of integer=%d bytes",sizeof(int));
		printf("\nsize of float=%f bytes",sizeof(float));
		printf("\nsize of variable=%d bytes",sizeof(a));
		printf("\nsize of variable=%f bytes",sizeof(b));	
		return 0;*/
			
			//CONDITIONAL//TERNORY OPERATOR
			
	/*int a,b,max;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	printf("%d max number",max);
	return 0;*/		
	
	//FIND THE NUMBERS OF MAX NUMBER
	
	int a,b,c,max;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(b>c)?b:c;
	max=(a>c)?a:c;
	printf("%d max number",max);
	return 0;			
	
}
