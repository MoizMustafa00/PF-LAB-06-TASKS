#include<stdio.h>
int main()
{
	int money=0, coins=0, quarters=0, dimes=0, nickels=0, pennies=0;
	printf("Enter the amount of money in cents: ");
	scanf("%d", &money);
	while(money>=25)
	{
		money-=25;
		quarters++;
		coins++;
	}
	while(money>=10)
	{
		money-=10;
		dimes++;
		coins++;
	}
	while(money>=5)
	{
		money-=5;
		nickels++;
		coins++;
	}
	while(money>=1)
	{
		money-=1;
		pennies++;
		coins++;
	}
	printf("The number of coins needed are %d\n",coins);
	printf("25cent coins: %d\n",quarters);
	printf("10cent coins: %d\n",dimes);
	printf("5cent coins: %d\n",nickels);
	printf("1cent coins: %d\n",pennies);
	return 0;
}
