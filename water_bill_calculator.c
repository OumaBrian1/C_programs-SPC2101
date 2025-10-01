/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a program showing how a water company charges its customers
*/

#include<stdio.h>include 
int main(){
	int units;
	float charges;
	
	//prompt the user to enter number of water units consumed
	printf("Enter the number of water units consumed:");
	scanf("%d",&units);
	
	if (units >= 0 &&units <=30){
		charges =20;
	}
	else if(units >= 31 &&units <=60){
		charges =25;
	}
	else if(units >60){
		charges =30;
	}
	
	printf("\n Total water bill:%.2f KES",charges);
	
	return 0;
}