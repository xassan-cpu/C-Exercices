#include<stdio.h>
#include<math.h>

int main(void)
{
	double numx, ratio, average, numy = 1;

	printf("Enter a positive number: ");
	scanf("%lf", &numx);

	ratio = numx / numy;

	average = (numy + ratio) / 2;	

	while (fabs(average - numy) > 0.00001)
	{
		numy = average;
		ratio = numx / numy;
		average = (numy + ratio) / 2;
	}

	printf("Square root: ");
	printf("%.5lf\n", numy);
	
}
