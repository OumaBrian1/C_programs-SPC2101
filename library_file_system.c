/*
Name: Brian Ouma
Reg : PA106/G/28812/25
Description: book borrowing system
*/
#include <stdio.h>

//main function
int main() {
    FILE *fptr;
    char title[100];
    
//opening of the file for appending
    fptr = fopen("borrowed_books.txt", "a");
    if (fptr == NULL) {
        printf("Error in opening file.\n");
        return 1;
    }
    
//user-visible output
    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);
    
//output printed on the file
    fprintf(fptr, "%s", title);
    fclose(fptr);

    printf("Book title stored successfully.\n");
    return 0;
}