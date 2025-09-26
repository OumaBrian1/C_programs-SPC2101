//simple bank loan program to show your eligibility
/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a bank loan program to show one's eligibility
*/
#include<stdio.h>

int main() {
	int age;
	float income;
	
	//prompt the user to enter age
	printf("enter your age:");
	scanf("%d",&age);
	
	//prompt the user enter annual income
	printf("enter annal income:");
	scanf("%f",&income);
	
	//display eligibility if conditions are met
	//atleast ksh.21000 as annual income and a minimum age of 21yrs
	if(age>=21&income>=21000){
		printf("congratulations you qualify for a loan ");
	}	else{
		printf("unfortunately we are unable to offer a loan at this time");
	}
	
	return 0;

}
