/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:A program to calculatefare
*/

#include <stdio.h>
//calculate fare ()function
float calculatefare (int distance){
	//fare is ksh 50 per km
	float fare =distance*50;
	
	return fare;
}
int main(){
	float distance;
	//prompt the user to enter distance covered
	printf("Enter distance covered in km :");
	scanf("%f",&distance);
	//display the total fare
	printf("The total fare in ksh. %.2f \n",calculatefare(distance));
	return 0;
}