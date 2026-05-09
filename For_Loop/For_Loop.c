/*
 * For_Loop.c
 *
 *  Created on: 09-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>

int main()
{
	int i, n;
	printf("Enter the number Table to be calculated : \n");
	fflush(stdout);
	scanf("%d", &n);

	for(i=1; i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
}
