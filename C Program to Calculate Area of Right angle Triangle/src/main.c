#include <stdio.h>

int main()
{
	float area, base, height;
	printf("Enter the base: ");
	scanf("%f", &base);
	printf("Enter the height: ");
	scanf("%f", &height);
	area = 0.5 * base * height;
	printf("Area of Right Angle Triangle: %0.2f\n", area);

	return (0);
}