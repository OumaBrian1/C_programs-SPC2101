//C_program to find the volume and surface area of a cylinder
/*
Name:Brian Ouma
Reg no:PA106/G/28812/25
Description:program for the surface_area and volume of a cylinder
*/

#include <stdio.h>

int main()
{
	 float pi = 3.142;
	 float volume, surface_area, radius, height;

	 //prompt the user to enter the radius	 
	 printf("Enter radius: ");
	 scanf("%f", &radius);
	 
	 //prompt the user to enter the height
	 printf("\n Enter height: ");
	 scanf("%f", &height);
	 
	 //the volume and the surface_area
	 volume = pi * radius * radius * height;
	 surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
	 
	 //display the volume and the surface_area
	 printf("\n The volume is %f", volume);
	 printf("\n The surface_area is %f", surface_area);
	 
	return 0;
}
