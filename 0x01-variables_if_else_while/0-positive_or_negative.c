#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main  prints a random number and states whether, 
 *       it is positive, negative, or zero.
 *
 * return: Always 0.
 */
int main(void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive \n", n);
else if (n < 0)
printf("%d is negative \n", n);
else

printf("%d is zero \n", n);

return (0);
}
	
=======
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);

	return (0);

}
>>>>>>> df74e5e627de0f235b2e54e7a7d896ba86d63d34
