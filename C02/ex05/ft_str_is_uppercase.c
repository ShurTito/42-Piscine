/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:57:47 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 18:03:22 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	*str= "ASGDFSAS";

	ft_putstr(str);
	write(1, "\n", 1);
	if (ft_str_is_uppercase(str) == 0)
		ft_putstr("NO contiene solo Letras MAYUS");
	else if (ft_str_is_uppercase(str) == 1)
		ft_putstr("Contiene SOLO Letras MAYUS");
	write(1, "\n", 1);
	return (0);
}
*/