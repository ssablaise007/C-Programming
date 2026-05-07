/*
 * Fibonacci.c
 *
 *  Created on: 07-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>

int main()
{
    int n, i;
    long long t1 = 0, t2 = 1, nextterm;

    printf("Enter number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");

    for(i = 1; i <= n; ++i)
    {
        printf("%lld ", t1);

        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }

    return 0;
}
