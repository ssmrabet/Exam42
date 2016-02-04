#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (void)
{
	char i;

	i = 57 ;
	while (i >= 48)
	{
		ft_putchar (i);
		i--;
	}
	ft_putchar ('\n');
	return (0);
}
