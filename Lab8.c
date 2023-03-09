#include <stdio.h>

#include "Lab8.h"

#pragma warning (disable:4996)

int IsValidOp(const char ValidOps[], char * Op)	
{
	int		i;
	char c;
	scanf("%c", Op);
	scanf("%c", &c);
	for (i = 0; ValidOps[i] != '\0'; i++)
		if (ValidOps[i] == *Op)	
			return 1;
		else;
		return 0;
}