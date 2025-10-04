#include<stdio.h>
int main()
{
	int num=0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	printf("Number multiplied by 2 = %d\n",num<<1);
	printf("Number multiplied by 4 = %d\n",num<<2);
	printf("Number multiplied by 8 = %d\n",num<<3);
	return 0;
}
