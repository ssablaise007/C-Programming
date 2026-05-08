/*
 * Typedef.c
 *
 *  Created on: 08-May-2026
 *      Author: Shoyab Silar
 */


#include<stdio.h>  // Preprocessor Section

int main() // Main Function
{
	enum Lane_qaulity
	{
		solid,dashed,striped
	};
	typedef enum Lane_qaulity Lanetype;
	Lanetype Localroad, Highway;

	Localroad = solid;
	Highway = striped;

	if(Highway == striped && Localroad == solid)
	{
		printf("\n We are driving on Highway");
	}

	return 0;

}
