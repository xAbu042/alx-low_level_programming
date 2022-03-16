#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int k, m;

	k = 0;

/*prints the hours*/

	while (k < 24)
	{
		m = 0;

/*prints the minutes*/

		while (m < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		k++;
	}
}
