#include <stdio.h>

int main()
{
	int basic = 0, medical = 1500, working_days = 0, internet_bill = 1000, mobile_bill = 500, number_of_first_classes = 0, gross_salary;
	printf("Enter basic salary: ");
	scanf("%d", &basic);
	printf("Enter number of 1st Classes (0 - 4): ");
	scanf("%d", &number_of_first_classes);
	printf("Enter number of Working Days: ");
	scanf("%d", &working_days);

	int increment = basic * 0.05;
	int house_rent = basic * 0.6;
	int lunch_allowance = working_days * 200;

	if (number_of_first_classes > 0 && number_of_first_classes == 1)
	{
		gross_salary = basic + medical + internet_bill + mobile_bill + house_rent + lunch_allowance + increment;
		printf("Gross Salary is %d\n", gross_salary);
	}
	else if (number_of_first_classes > 0 && number_of_first_classes == 2)
	{
		gross_salary = basic + medical + internet_bill + mobile_bill + house_rent + lunch_allowance + increment * 2;
		printf("Gross Salary is %d\n", gross_salary);
	}
	else if (number_of_first_classes > 0 && number_of_first_classes == 3)
	{
		gross_salary = basic + medical + internet_bill + mobile_bill + house_rent + lunch_allowance + increment * 3;
		printf("Gross Salary is %d\n", gross_salary);
	}
	else if (number_of_first_classes > 0 && number_of_first_classes == 4)
	{
		gross_salary = basic + medical + internet_bill + mobile_bill + house_rent + lunch_allowance + increment * 4;
		printf("Gross Salary is %d\n", gross_salary);
	}
	else if (number_of_first_classes == 0)
	{
		gross_salary = basic + medical + internet_bill + mobile_bill + house_rent + lunch_allowance;
		printf("Gross Salary is %d\n", gross_salary);
	}
	else
	{
		printf("Invalid Entry. Enter number between 0 - 4.");
	}

	return (0);
}
