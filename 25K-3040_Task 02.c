#include<stdio.h>
int main()
{
	int num=0,res=0,i=0;
	printf("Enter an integer: ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		res=num*i;
		printf("%d * %d = %d\n",num,i,res);
	}
	return 0;
}
