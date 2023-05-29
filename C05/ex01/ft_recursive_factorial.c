/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:14:07 by antferna          #+#    #+#             */
/*   Updated: 2023/02/20 13:13:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (i >= 1)
	{
		nb = ft_recursive_factorial(nb - 1);
		nb *= i--;
	}
	return (nb);
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
		n = ft_recursive_factorial(n);
		printf("Resultado -> %d\n",n);
	}
}
*/
