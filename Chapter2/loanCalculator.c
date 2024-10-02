// Programming Project 8 from Section 2.8 p.35

/*
*	Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments.
*/

#include<stdio.h>

int main(void) 
{
	float loan_amount, interest_rate, monthly_interest_rate, monthly_payment, first_payment, second_payment, third_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payments: ");
	scanf("%f", &monthly_payment);

	monthly_interest_rate = interest_rate / 100 / 12;

	first_payment = (loan_amount * (1 + monthly_interest_rate)) - monthly_payment;
	second_payment = (first_payment * (1 + monthly_interest_rate)) - monthly_payment;
	third_payment = (second_payment * (1 + monthly_interest_rate)) - monthly_payment;
	
	printf("\n");

	printf("Balance remaining after first payment: $%.2f\n", first_payment);
	printf("Balance remaining after second payment: $%.2f\n", second_payment);
	printf("Balance remaining after third payment: $%.2f\n", third_payment);

	return 0;
}
