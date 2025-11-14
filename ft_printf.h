#ifndef TEMP_H
# define TEMP_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_disp_char(int c);
int		ft_disp_int(int nbr);
int		ft_disp_string(char *str);
int		ft_disp_unsigned(unsigned int nbr);
int		ft_disp_pointer(void *ptr);

#endif