#include<stdio.h>
#include<math.h>
int main()
{
	float A=0, P=0, r=0;
	int t=0, n=0;
	printf("Enter the principal amount: \n");
	scanf("%f", &P);
	printf("Enter the annual interest rate: \n");
	scanf("%f", &r);
	printf("Enter the number of years: \n");
	scanf("%d", &t);
	printf("Enter the compounding frequency per year: \n");
	scanf("%d", &n);
	A=P*pow((1+r/n),n*t);
	printf("The future value of an investment is Rs%.2f\n",A);
	return 0;
}
