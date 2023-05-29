/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:15:29 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 11:57:15 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <unistd.h>
int	main(void)
{
	int		n1;
	int		n2;
	int		*div;
	int		*mod;
	char	c;

	n1 = 0;
	n2 = 0;
	div = &n1;
	mod = &n2;
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
	ft_div_mod(42, 10, div, mod);
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