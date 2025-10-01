/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:a program to show if a student is eligible for an exam

*/

#include<stdio.h>


int main (){
	
	
	int Attendance,average_marks;
	//prompt the user to enter attendance
	printf("Enter the student's attendance:");
	scanf("%d",&Attendance);
	//promt the user to enter average_marks
	printf("\n Enter the student's average_marks:");
	scanf("%d",&average_marks);
	
	if (Attendance >= 75 && average_marks >= 40){
		printf("\n you are eligible");
	}
	else
	{
		printf("\n not eligible");
		
	}
	
	return 0;
}