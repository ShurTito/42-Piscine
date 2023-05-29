/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:54:51 by antferna          #+#    #+#             */
/*   Updated: 2023/02/23 11:17:30 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		c = nb % 10 + '0';
		if (nb > 9)
		{
			nb = nb / 10;
			ft_putnbr(nb);
		}
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-48818751);
	return (0);
}
*/