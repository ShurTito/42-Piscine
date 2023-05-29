/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:50:56 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 17:57:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	*str= "fafdfada";

	ft_putstr(str);
	write(1, "\n", 1);
	if (ft_str_is_lowercase(str) == 0)
		ft_putstr("NO contiene solo Letras Minusculas");
	else if (ft_str_is_lowercase(str) == 1)
		ft_putstr("Contiene SOLO Letras MINUSCULAS");
	write(1, "\n", 1);
	return (0);
}
*/