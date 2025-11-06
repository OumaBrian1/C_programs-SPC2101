/*
Name: Brian Ouma
Admission number: PA106/G/28812/25
Description: Exams_Elegibility
*/
#include <stdio.h>

//main function
int main() {
	//declaration
	int attendance;
	int average_marks;
	
	//inputs
	printf("Enter attendance(in percentage):\n");
	scanf("%d", &attendance);
	printf("Enter average marks:\n");
	scanf("%d", &average_marks);
	
	//conditions and output
	if (attendance >= 75 &&average_marks>=40)
	{
		printf("Eligible for exams \n");
	} else {
	printf("Not elible. \n");
	}
	return 0;
}