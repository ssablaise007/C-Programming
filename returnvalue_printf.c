/*
 * returnvalue_printf.c
 *
 *  Created on: 04-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	int x = 66, y = 5;
	int charcount=0;
	charcount = printf("\n Value of X = %d, Value of Y = %d",x,y);
	printf("\n Total number of characters printed in console : %d",charcount);

}

