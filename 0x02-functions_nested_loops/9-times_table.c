#include "main.h"

/**
 * times_table -  prints the 9 times table,
 * starting with 0
 */
void times_table(void)
{
	int a, m, p;

/*prints a new line and multiples as whole numbers*/

	for (a = 0; a < 10; a++)
	{
		for (m = 0; m < 10; m++)
		{
			p = a * m;
			if (m == 0)
			{
				_putchar(p + '0');
			}

/*prints the comma and the double spaces*/

			if (p < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
/*prints the multiples in decimals*/
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
