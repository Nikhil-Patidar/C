#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,division,modulus;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("addition of two number=%d\n",sum);
	sub=a-b;
	printf("substraction of two number=%d\n",sub);
	mul=a*b;
	printf("multiplication of two number=%d\n",mul);
	division=a/b;
	printf("division of two number=%d\n",division);
	modulus=a%b;
	printf("modulus of two number=%d\n",modulus);
	
	/*
		
	
	float c,f;
	printf("Enter the temperature in celcius:\n");
	scanf("%f\n",&c);
	f=(c*9/5)+32;
	printf(" temperature in fahrenheit=%f",f);
	return 0;
}*/
return 0;
}
