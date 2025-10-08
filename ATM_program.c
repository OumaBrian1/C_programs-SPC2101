/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a program on withdrawal from ATM
*/

#include <stdio.h>

int main ()
{
	int amount;
	int balance = 2000;
	
	printf("WELCOME TO YOUR ATM ACCOUNT \n");
	printf("_______________\n");
	
	printf("Welcome \n");
	printf("Your current balance is %d \n",balance);//innitial
	
	while(balance>0)
	{
		//prompt the user to withdraw amount
		printf("Enter withdrawal amount:");
		scanf("%d",&amount);
		
		balance -=amount;//condition
		printf("your new balance is %d\n", balance);
	}
	printf("INSUFFICIENT BALANCE");
	
	return 0;
}
