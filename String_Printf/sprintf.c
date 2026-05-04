/*
 * sprintf.c
 *
 *  Created on: 04-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	char *s = "My Name is Blaise";
	char a[100];
	int x=4,y=5;

	printf(s);
	printf("\n%s", s);

	sprintf(a,"\nx = %d, y = %d\n", x,y);
	printf("%s" ,a);

}
