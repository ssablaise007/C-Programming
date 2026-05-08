/*
 * datatype_check.c
 *
 *  Created on: 08-May-2026
 *      Author: Shoyab Silar
 */

#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	// un-signed Char Range is : 0 to 255
	unsigned char A;
	signed char B;
	short int P;
	long int Q;
	long long int R;
	float F;
	double X;

	// Signed Char Range is : -128 to 127



	printf("Size of unsigned char %d bytes", sizeof(A));
	printf("\nSize of signed char %d bytes", sizeof(B));
	printf("\nSize of long long int %d bytes", sizeof(R));
	printf("\nSize of short int %d bytes", sizeof(P));
	printf("\nSize of long int %d bytes", sizeof(Q));
	printf("\nSize of float %d bytes", sizeof(F));
	printf("\nSize of double %d bytes", sizeof(X));

}
