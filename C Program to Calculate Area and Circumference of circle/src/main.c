#include <stdio.h>
#define PI 3.1416

int main()
{
	float radius = 0.0, area = 0.0, circumference = 0.0;
	printf("Enter Radius of Circle: ");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("Area of Circle: %0.2f\n", area);
	circumference = 2 * PI * radius;
	printf("Circumference of Circle: %0.2f\n", circumference);

	return (0);
}