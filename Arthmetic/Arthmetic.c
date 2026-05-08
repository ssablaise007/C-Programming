/*
 * Arthmetic.c
 *
 *  Created on: 08-May-2026
 *      Author: Shoyab Silar
 */
#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	int a = 1;
	int b = 2;
	int d = 3;
	//int d;

	printf("Value of a after pre-incrementing : %d\n", ++a); // pre-increment
	printf("Value of a after post-incrementing : %d\n", a++); // post-increment
	printf("Value of a after decrementing : %d\n", --a);
	printf("Addition of a & b  : %d\n", d = a+b);
	printf("Subtraction of a & b  : %d\n", d = a-b);
	printf("Multiplication of a & b  : %d\n", d = a*b);
	printf("Division of a & b  : %d", d = a/b);

	return 0;

}

