/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:23:30 by lchosi            #+#    #+#             */
/*   Updated: 2020/06/19 16:06:35 by lchosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_print_alphabet(void)
{
	char	letter;
	
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
