#include <stdio.h>

void    ft_print_reverse_alphabet(void)
{
    char    letter;

		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter--;
		}
	}

	int main(void)
	{
		ft_print_reverse_alphabet();
		return 0;
	}
