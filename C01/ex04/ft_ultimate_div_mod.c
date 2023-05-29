/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:07:25 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 11:33:19 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;
	int	aux2;

	aux = *a;
	aux2 = *b;
	*a = aux / aux2;
	*b = aux % aux2;
}
/*
#include <unistd.h>
int	main(void)
{
	int		n1;
	int		n2;
	int		*a;
	int		*b;
	char	c;

	n1 = 99;
	n2 = 25;
	a = &n1;
	b = &n2;
	c = n1 / 10 + '0';
	write(1, &c, 1);
	c = n1 % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = n2 / 10 + '0';
	write(1, &c, 1);
	c = n2 % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	ft_ultimate_div_mod(a, b);
	c = n1 / 10 + '0';
	write(1, &c, 1);
	c = n1 % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = n2 / 10 + '0';
	write(1, &c, 1);
	c = n2 % 10 + '0';
	write(1, &c, 1);
	return (0);
}
*/