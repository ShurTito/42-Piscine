/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:38:18 by antferna          #+#    #+#             */
/*   Updated: 2023/02/20 13:53:13 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
	{
		res = ft_recursive_power(nb, power - 1);
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int n;
	int	pow;
	if (argc > 2)
	{
		n = atoi(argv[1]);
		pow = atoi(argv[2]);
		printf("Numero ->  %d, Potencia -> %d\n", n, pow);
		n = ft_recursive_power(n,pow);
		printf("Resultado -> %d\n",n);
	}
}
*/
