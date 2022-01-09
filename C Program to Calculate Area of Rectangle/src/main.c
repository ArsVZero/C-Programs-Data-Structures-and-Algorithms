#include <stdio.h>

int main()
{
	float length, breadth, area;
	printf("Enter the Length of Rectangle: ");
	scanf("%f", &length);
	printf("Enter the Breadth of Rectangle: ");
	scanf("%f", &breadth);
	area = length * breadth;
	printf("Area of Rectangle: %0.2f\n", area);

	return (0);
}