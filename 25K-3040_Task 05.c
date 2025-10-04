#include<stdio.h>
int main()
{
	int participants=0, fact=1, i=0;
	printf("Enter the number of participants: ");
	scanf("%d", &participants);
	for(i=1;i<=participants;i++)
	{
		fact*=i;
	}
	printf("The total ways to arrange %d participants = %d",participants,fact);
	return 0;
}
