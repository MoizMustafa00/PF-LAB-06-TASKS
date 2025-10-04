#include<stdio.h>
#include<math.h>
int main()
{
	float members=0, pay=250.50, total_cost=0;
	printf("Enter the number of people in a group: \n");
	scanf("%f", &members);
	total_cost=ceil(members*pay);
	printf("The total cost is Rs%.0f",total_cost);
	return 0;
}
