#include<stdio.h>
int main()
{
	int num=0, count=0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	while(num!=0)
	{
		if(num&1)
		{
			count++;
		}
		num=num>>1;
	}
	printf("Number of 1s in binary representation are %d\n",count);
	return 0;
}
