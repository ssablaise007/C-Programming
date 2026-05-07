/*
 * swapping.c
 *
 *  Created on: 07-May-2026
 *      Author: Shoyab Silar
 */
#include<stdio.h>

void swapbyvalue( int x, int y){
	int temp = x;
			x = y;
			y = temp;
		}

int main()
{

int a = 10, b = 20;
	swapbyvalue(a,b);

  printf("a = %d, b = %d", a,b);
      return 0;
}

