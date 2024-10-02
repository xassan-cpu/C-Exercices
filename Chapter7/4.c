// Programming Project #4 from Chapter 7, p. 157
//
// Write a program that translates an alphabetic phone number into numeric form
//
// 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PQR, 8=STU, 9=VWX
//
// Leave the nonalphanueric characters unchanged


#include<stdio.h>

int main(void)
{
	char ch;

	printf("Enter phone number: ");
	
	while ((ch = getchar()) != '\n')
	{
		switch (ch) 
		{
			case 'A':
			case 'B':
			case 'C':
				printf("%i", 2);
				break;
			case 'D':
			case 'E':
			case 'F':
				printf("%i", 3);
				break;
			case 'G':
			case 'H':
			case 'I':
				printf("%i", 4);
				break;
			case 'J':
			case 'K':
			case 'L':
				printf("%i", 5);
				break;
			case 'M':
			case 'N':
			case 'O':
				printf("%i", 6);
				break;
			case 'P':
			case 'Q':
			case 'R':
				printf("%i", 7);
				break;
			case 'S':
			case 'T':
			case 'U':
				printf("%i", 8);
				break;
			case 'V':
			case 'W':
			case 'X':
				printf("%i", 9);
				break;
			default:
				printf("%c", ch);
		}
			
	}

	printf("\n");

	return 0;
}
