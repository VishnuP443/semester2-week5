
/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Vishnu Pandaraparambath
 * ID: 201923075
 */

#include <stdio.h>
#include <string.h>

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

	for (int k = 0; k < length; k++)
	{

		if ('0' <= hex[k] && hex[k] <= '9') // Checks if the hex is 0-9
		{
			// subtracts 48 so that 0 scales to 0 and 1-9 scale accordingly
			decimal = (decimal * 16) + (hex[k] - 48);
			// Shifts the whole hex by a place value to ensure they end up in the correct place
		}

		else if ('A' <= hex[k] && hex[k] <= 'F') // Checks if the hex is A-F
		{
			// Subtracts 55 so that A scales to 10 and B C .. etc. scale accordingly
			decimal = (decimal * 16) + (hex[k] - 55);
			// Shifts the whole hex by a place value to ensure they end up in the correct place
		}

		else if ('a' <= hex[k] && hex[k] <= 'f') // Checks if the hex is a-f (lower case)
		{
			// subtracts 87 so that a scales to 10 and b c ... etc accordingly
			decimal = (decimal * 16) + (hex[k] - 87);
			// Shifts the whole hex by a place value to ensure they end up in the correct place
		}

		else
		{
			printf("Error: Invalid Hexadecimal\n");
		}
	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);

	return 0;
}