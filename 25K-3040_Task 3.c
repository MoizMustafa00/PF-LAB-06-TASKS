#include<stdio.h>
int main()
{
	int balance=0, withdraw=0, upd_balance=0;
	printf("Enter your bank balance: \n");
	scanf("%d", &balance);
	while(1)
	{
		printf("Enter the amount to withdraw: \n");
		scanf("%d", &withdraw);
		if(balance>=withdraw)
		{
		    upd_balance=balance-withdraw;
		    balance=upd_balance;
			printf("Bank Balance = %d\n",upd_balance);
		}
		else
		{
			printf("You cannot withdraw\n");
			break;
		}
	}
	return 0;
}
