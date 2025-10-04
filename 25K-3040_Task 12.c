#include<stdio.h>
int main()
{
	int num=0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	if((num&1)==0)
	{
		printf("%d is even\n",num);
	}
	else
	{
		printf("%d is odd\n",num);
	}
	return 0;
}
