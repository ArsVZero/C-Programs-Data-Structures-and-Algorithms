#include <math.h>
#include <stdio.h>

int main()
{
	float side1, side2, angle, area;
	printf("Enter Side1: ");
	scanf("%f", &side1);
	printf("Enter Side2: ");
	scanf("%f", &side2);
	printf("Enter included angle: ");
	scanf("%f", &angle);
	area = (side1 * side2 * sin((M_PI / 180) * angle)) / 2;
	printf("Area of Scalene Triangle: %0.2f\n", area);

	return (0);
}