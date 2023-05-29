/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:36:30 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 11:56:50 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
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

	n1 = 46;
	n2 = 78;
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
	ft_swap(a, b);
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