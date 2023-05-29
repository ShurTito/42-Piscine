/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:01:53 by antferna          #+#    #+#             */
/*   Updated: 2023/02/15 19:13:48 by antferna         ###   ########.fr       */
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
			ft_putnbr(nb / 10);
		}
		write(1, &c, 1);
	}
}
/*
int	main(int argc, char **argv)
{
	int	n;
	int	signo;

	if (argc == 2)
	{
		n = 0;
		signo	= 1;
    	if (*argv[1] == '-')
		{
    		signo = -1;
    		*argv[1]++;
    	}
    	while (*argv[1])
		{
        	n = n * 10 + (*argv[1] - '0');
    		*argv[1]++;
    	}
		n *= signo;
		ft_putnbr(n);
	}
	return (0);
}
*/