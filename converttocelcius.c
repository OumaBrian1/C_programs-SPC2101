/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:A program to convert to celcius the temperature
*/

#include <stdio.h>

//convert to celcius program()
float convertToCelcius(float fahrenheit){
	float celcius = (fahrenheit -32)* 5/9;
	
	return celcius;
}

int main(){
	float fahrenheit;
	//prompt the user to enter temparature in fahrenheit
	printf("Enter  the temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	//display temperature in celcius
	printf("Temperature in celcius = %.2fdegreecelcius",convertToCelcius(fahrenheit));
	
	return 0;
} 