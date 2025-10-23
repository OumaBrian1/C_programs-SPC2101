/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Descrioption:CalculateElectricBill program
*/

#include <stdio.h>

float calculateElectricBill(int units){
	float bill = 0.0;
	//if ,else if,function 
	if(units <= 100){
		bill = units*10;
	}
	else if (units <= 200){
		bill = (100*10)+ ((units - 100)* 15);
	}
	else {
		bill = (100*10) +(100*15) +((units -100) *20);
	}
	
	return bill;
	
}

int main () {
	int units;
	//prompt the user to enter no of units consumed
	printf("Enter units consumed:");
	scanf("%d",&units);
	//total bill in 2dp
	float totalBill = calculateElectricBill(units);
	printf("Total bill is ksh.%.2f \n",totalBill);
	
	return 0;
}