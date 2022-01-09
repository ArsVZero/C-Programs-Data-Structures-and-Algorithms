#include <math.h>
#include <stdio.h>

int main()
{
	float side, area;
	printf("Enter the Length of Side: ");
	scanf("%f", &side);
	area = (sqrt(3) / 4) * side * side;
	printf("Area of Equilateral Triangle: %0.2f\n", area);
	return (0);
}