/*
DESCRIPTION: Programming Excerise Eight
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: Mar 2019
*/
#pragma warning (disable:4996) 

#include "MathFunctions.h"
#include "Booleans.h"
#include <conio.h>
#include <stdio.h>


void main()

{
	char X;
	char op;
	long num1, num2;


	printf("Enter the 1st number then press enter, C to clear, or X to exit \n");
	scanf("%ld", &num1);
	scanf("%c", &X);


	while (toupper(X) != 'X')
	{
		if (toupper(X) == 'C')
		{
			num1 = 0;
			printf("Cleared! Enter the 1st number, then press enter \n");
			scanf("%ld", &num1);
			scanf("%c", &X);
		}

		printf("Enter an operator (+, -, *, or /) then press enter, C to clear, or X to exit \n");
		scanf("%c", &op);
		scanf("%c", &X);
		if (tolower(op) != 'x')
		{
			if (tolower(op) == 'c')
			{
				num1 = 0;
				printf("Cleared! Enter the 1st number then press enter \n");
				scanf("%1d", &num1);
				scanf("%c", &X);
			}
			else
			{


				switch (op)
				{
				case '*':
					printf("Please enter the second number then press enter \n");
					scanf("%ld", &num2);
					num1 = mult(num1, num2);
					printf("The result is %ld \n", num1);
					scanf("%c", &X);
					break;
				case '/':

					printf("Please enter the second number then press enter \n");
					scanf("%ld", &num2);
					if (num2 != 0)
					{

						num1 = div(num1, num2);
						printf("The result is %ld \n", num1);
						scanf("%c", &X);
						break;
					}
					else
					{
						printf("Cannot divide by zero \n");
						scanf("%c", &X);
						break;
					}
				case '+':
					printf("Please enter the second number then press enter \n");
					scanf("%ld", &num2);
					num1 = Add(num1, num2);
					printf("The result is %ld \n", num1);
					scanf("%c", &X);
					break;
				case '-':
					printf("Please enter the second number then press enter \n");
					scanf("%ld", &num2);
					num1 = Sub(num1, num2);
					printf("The result is %ld \n", num1);
					scanf("%c", &X);
					break;
				default:
					printf("Invalid operator \n");
					break;
				}
			}
		}
	}
	printf("Exiting calculator");
}