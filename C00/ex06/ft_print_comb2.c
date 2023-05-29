/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:48:07 by antferna          #+#    #+#             */
/*   Updated: 2023/02/08 11:12:09 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	c;

	n1 = 00;
	n2 = 01;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			c = n1 / 10 + '0';
			write(1, &c, 1);
			c = n1 % 10 + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = n2 / 10 + '0';
			write(1, &c, 1);
			c = n2 % 10 + '0';
			write(1, &c, 1);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n2 = ++n1 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/