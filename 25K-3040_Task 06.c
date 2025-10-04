#include<stdio.h>
int main()
{
	int num=0, remainder=0, reversed_num=0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	while(num>0)
	{
		remainder=num%10;
		reversed_num=(reversed_num*10)+remainder;
		num/=10;
	}
	printf("The reversed number is %d",reversed_num);
	return 0;
}
