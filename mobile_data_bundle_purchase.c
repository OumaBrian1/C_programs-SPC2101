/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a program to display mobile data bundle purchase
*/

#include<stdio.h>
int main(){
	int choice;
	
	//prompt the user to select preffered choices
	printf("select data bundle:\n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200 KES \n");
	printf("3. 1GB    @ 350 KES \n");
	printf("4.  2GB   @ 600 KES \n");
	
	printf("Enter your choice (1-4): ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("you selected 100MB @ 50 KES");
			break;
		case 2:
			printf("you selected 500MB @ 200 KES");
			break;
		case 3:
			printf("you selected 1GB @ 350 KES");
			break;
		case 4:
			printf("you selected 2GB @ 600 KES");
			break;
		default:
			printf("Invalid choice");
	}
	
	return 0;
}