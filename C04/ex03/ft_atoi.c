/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:31:55 by antferna          #+#    #+#             */
/*   Updated: 2023/02/23 11:28:39 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		n;
	int		negativo;

	n = 0;
	negativo = 1;
	i = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) == 1)
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			negativo *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{	
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * negativo);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char cadena[] = "  \n \v \t \f \r ---++-++---++---+523467834ab567";
	char cadena2[] = "    werwqrew +523467834ab567";

	int n = ft_atoi(cadena);

	printf("%d\n", n);
	int n2 = atoi(cadena2);
	printf("%d\n", n2);


	return (0);
}
*/
