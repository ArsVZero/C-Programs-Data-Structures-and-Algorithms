#include <stdio.h>

int main()
{
	float side, area;
	printf("Enter the Length of Side: ");
	scanf("%f", &side);
	area = side * side;
	printf("Area of Square: %0.2f\n", area);

	return (0);
}