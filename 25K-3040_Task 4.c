#include<stdio.h>
int main()
{
	int num=0, orig_num=0, remainder=0, new_num=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	orig_num=num;
	while(orig_num!=0)
	{
		remainder=orig_num%10;
		new_num+=(remainder*remainder*remainder);
		orig_num/=10; 
	}
	if(new_num==num)
	{
		printf("%d is an armstrong number\n",num);
	}
	else
	{
		printf("%d is not an armstrong number\n",num);
	}
	return 0;
}
