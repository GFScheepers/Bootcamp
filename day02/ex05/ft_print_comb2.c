#include "pts.h"

void ft_printnum(int num)
{
	ft_putchar(' ');
	ft_putchar('0' + (num / 10));
	ft_putchar('0' + (num % 10));
}

void ft_print_comb2(void)
{
	int		nr1;
	int		nr2;
 
	nr1 = 0;
	while (nr1 < 100)
	{
		nr2 = nr1 + 1;
		while (nr2 < 100) 
		{
			ft_printnum(nr1);
			ft_printnum(nr2);
			if (nr1 != 98)
			{
				ft_putchar(',');
			}
			nr2++;
		}
		nr1++;
	}
}