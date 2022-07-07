#include <stdio.h>

/**
 *  * main - finding sum of multiples of 3 and 5 less than 1024
 *   *
 *    * Standard library
 *
 *       * Return: 0 if successful
 */

int main(void)
{
		int ii, _sum;

			for (ii = 3; ii < 1024; ii++)
					{
								if (ii % 3 == 0 || ii % 5 == 0)
												_sum += ii;
									}
				printf("%d\n", _sum);
					return (0);
}
