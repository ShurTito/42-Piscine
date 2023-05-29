/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:38:02 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 12:00:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	char	cadena[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		cadena[i] = i + '0';
		i++;
	}
	str = cadena;
	ft_putstr(str);
	return (0);
}
*/