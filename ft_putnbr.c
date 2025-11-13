#include "temp.h"

int     ft_check_digits(int n)
{
        int     digits;

        digits = 1;
        if (n < 0)
                n = -n;
        while (n >= 10)
        {
                n = n / 10;
                digits++;
        }
        return (digits);
}

int    ft_putnbr(int n)
{
    if (n == -2147483648)
    {
    	ft_putstr("-2147483648");
    	return ;
    }
    if (n < 0)
    {
    	write(1, "-", 1);
 		n = -n;
    }
    if (n >= 10)
    {
    	ft_putnbr(n / 10);
    }
    ft_putchar((n % 10) + '0');
}