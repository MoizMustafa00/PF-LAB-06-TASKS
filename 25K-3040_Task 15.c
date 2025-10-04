#include<stdio.h>
int main()
{
	int num1=0, num2=0;
	printf("Enter two integers: \n");
	scanf("%d %d", &num1, &num2);
	printf("Before Swapping:\nNum1 = %d and Num2 = %d\n\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("After Swapping:\nNum1 = %d and Num2 = %d\n\n",num1,num2);
	return 0;
}
