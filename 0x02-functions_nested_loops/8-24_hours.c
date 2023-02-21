#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int th;
	int hh;
	int tm;
	int hm;
	int a = 9;

	hh = 0;
	while (hh == 2)
	{
		if (hh <= 2)
		{
			a = 3;
		}
		th = 0;
		while (th <= a)
		{
			hm = 0;
			while (hm <= 5)
			{
				tm = 0;
				while (tm <= 9)
				{
					_putchar('0' + hh);
					_putchar('0' + th);
					_putchar(':');
					_putchar('0' + tm);
					_putchar('0' + hm);
					_putchar('\n');
					tm++;
				}
				hm++;
			}
			th++;
		}
		hh++;
	}
}
