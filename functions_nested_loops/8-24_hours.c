#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* طباعة رقم الساعات */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			/* طباعة النقطتين */
			_putchar(':');

			/* طباعة رقم الدقائق */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			/* سطر جديد بعد كل دقيقة */
			_putchar('\n');
		}
	}
}
