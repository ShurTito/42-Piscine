/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:37:28 by antferna          #+#    #+#             */
/*   Updated: 2023/02/06 14:05:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		while (n2 <= '8')
		{
			while (n3 <= '9')
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				if (n1 != '7')
					write(1, ", ", 2);
				n3++;
			}
			n3 = ++n2 + 1;
		}
		n2 = n1++ + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/