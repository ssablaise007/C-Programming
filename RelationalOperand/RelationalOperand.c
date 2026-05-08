/*
 * RelationalOperand.c
 *
 *  Created on: 08-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	int a = 10;
	int b = 15;
	int c = 122;

	if (a >= b)
	{
		if (a >= c)
		printf("a is greater than c");
	else
		printf("a is less than c");
	}
	else
	{
		if (b >= c)
				printf("b is greater than c");
			else
				printf("b is less than c");
	}

	return 0;
	}

