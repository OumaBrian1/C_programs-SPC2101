/*
Name: Brian Ouma
Reg : PA106/G/28812/25
Description: sales system
*/

#include <stdio.h>

//main function
int main() {
	
	//declaration
    FILE *fptr;
    float amount, total = 0;
    
    //opening file for reading
    fptr = fopen("sales.txt", "r");
    if (fptr == NULL) {
        printf("File not found.\n");
        return 1;
    }
    
    //calcu;ations
    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fptr);
    //output displayed for user
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}