/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:32:04 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 16:38:40 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
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

int	main(void)
{
	char	*str= "4";

	ft_putstr(str);
	write(1, "\n", 1);
	if (ft_str_is_numeric(str) == 0)
		ft_putstr("NO contiene solo NUMEROS");
	else if (ft_str_is_numeric(str) == 1)
		ft_putstr("Contiene SOLO NUMEROS");
	write(1, "\n", 1);
	return (0);
}
*/