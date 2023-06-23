#include "main.h"
/**
 * positive_or_negative - Test if the integer ids negative or positive
 *@i: Integer to be tested
 */
void positive_or_negative(int i)
{
	int i;

	if (i > 0)
		printf("%d is positive \n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
