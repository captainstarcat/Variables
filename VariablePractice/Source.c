#include <stdio.h>
#include <stdlib.h>


main()
{
	int num1, num2;
	double total;
	
	printf("Enter the first integer: ");
	scanf_s("%i", &num1);
	printf("Enter the second integer: ");
	scanf_s("%i", &num2);
	total = num1 + num2;
	printf("Total is %lf\n", total);
}
