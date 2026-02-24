
/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Vishnu Pandaraparambath
 * ID: 201923075
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

// ASCII of 0-8 is 48-57
// ASCII of A-F is 65-70

int main(void)
{
	long decimal = 0;
	char buffer[100];
	char hex[9];

	printf("Enter a hexadecimal:");
	fgets(buffer, 100, stdin);
	sscanf(buffer, "%s", hex);
	int length = strlen(hex);
	// Power is used in the calculation to work out the decimal eqivalent of the position of the hex character
	int power = length - 1;

	for (int k = 0; k < length; k++)
	{
		if (!('0' <= hex[k] && hex[k] <= '9') && !('A' <= hex[k] && hex[k] <= 'F') && !('a' <= hex[k] && hex[k] <= 'f'))
		{
			printf("Error: Invalid Hexadecimal\n");
		}

		if ('0' <= hex[k] && hex[k] <= '9') // Checks if the hex is 0-9
		{
			decimal += pow(16, power) * (hex[k] - 48); // subtracts 48 so that 0 scales to 0 and 1-9 scale accordingly

		}

		if ('A' <= hex[k] && hex[k] <= 'F') // Checks if the hex is A-F
		{
			decimal += pow(16, power) * (hex[k] - 55); // Subtracts 55 so that A scales to 10 and B C .. etc. scale accordingly
		}

		if ('a' <= hex[k] && hex[k] <= 'f') 
		{
			decimal += pow(16, power) * (hex[k] - 87); //subtracts 87 so that a scales to 10 and b c ... etc accordingly
		}
		power -= 1;
	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);

	return 0;
}