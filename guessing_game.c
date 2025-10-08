/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a number guessing game program
*/

#include<stdio.h>

int main(){
	
	//declare a secret number between 1-20
	int secret_number = 15;
	int guess;
	int attempts = 0;
	
    printf("WELCOME TO BRIAN'S GUESSING GAME \n");
	printf("I'm thinking of a number between 1 and 20.\n");
	
	while(guess != secret_number)
	{
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
		
		if(guess > secret_number){
			printf("Too high!\n");
		}else if(guess < secret_number)
		{
			printf("Too low!\n");
		}else
		{
			printf("Congratulations!That's the number\n");
			printf("You have %d attempt(s)", attempts);
		}
	}
   

    return 0;
}