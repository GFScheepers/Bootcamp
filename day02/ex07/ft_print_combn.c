#include "pts.h"

int		ft_set_n(int n)
{
	if (n == 1)
		return (9);
	if (n == 2)
		return (99);
	if (n == 3)
		return (999);
	if (n == 4)
		return (9999);
	if (n == 5)
		return (99999);
	if (n == 6)
		return (999999);
	if (n == 7)
		return (9999999);
	if (n == 8)
		return (99999999);
	if (n == 9)
		return (999999999);
}

void ft_printnum(int n, int pos)
{
	if (n < 0) 
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		ft_putchar('0');
	if (pos <= 9)
	{
		ft_putchar('0' + (pos / 10));
		ft_putchar('0' + (pos % 10));
	}
	if (pos > 9)
	{
		if (n / 10)
			ft_printnum(n / 10, pos);
		ft_putchar('0' + n % 10);
	}
}

void	ft_print_combn(int n)
{
	int		nbr1;
	int		i;
	
	nbr1 = 1;
	i = ft_set_n(n);
	while (nbr1 <= i)
	{
		ft_printnum(nbr1, nbr1);
		ft_putchar(',');
		ft_putchar(' ');
		nbr1++;
	}
}