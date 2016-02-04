#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (void)
{
	char c1;
	char c2;
	char r;

	c1 = 'A';
	c2 = 'a';
	r = 'i';
	while (c1 <= 'Z' && c2 <= 'z')
	{
		if (r == 'i')
		{
			ft_putchar (c2);
			r = 'p';
		}
		else
		{
			ft_putchar (c1);
			r = 'i';
		}
		c1++;
		c2++;
	}
	ft_putchar ('\n');
}
