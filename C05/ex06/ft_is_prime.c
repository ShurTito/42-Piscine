/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:36:58 by antferna          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:23 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int n;
	if (argc > 1)
	{
		n = atoi(argv[1]);
		printf("Numero ->  %d\n", n);
		n = ft_is_prime(n);
		if(n == 1)
			printf("Es primo -> %d\n",n);
		else
			printf("No es primo --> %d\n",n);
	}
}
*/
