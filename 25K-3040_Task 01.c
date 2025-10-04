#include <stdio.h>
int main()
{
	int num=0, sum=0;
	do
	{
		printf("Enter an integer (0 to stop): ");
		scanf("%d",&num);
		if(num!=0)
		{
			sum+=num;
			printf("Sum = %d\n",sum);
		}
	}
	while(num!=0);
	return 0;
}
