/*
 * if_else.c
 *
 *  Created on: 09-May-2026
 *      Author: Shoyab Silar
 */

/*
 * if_else.c
 *
 *  Created on: 09-May-2026
 *      Author: Shoyab Silar
 */

#include<stdio.h>

int main()
{
	int a = 0;

	printf("Enter the value for A : ");
	fflush(stdout);
	scanf("%d", &a);

	if (a>5)
	{
		printf("\n Value of A is greater than 5");
	}
	else if(a==5)
	{
		printf("\n Value of A is equals to 5");
	}
	else
	{
		printf("\n Value of A is less than than 5");
	}
}

