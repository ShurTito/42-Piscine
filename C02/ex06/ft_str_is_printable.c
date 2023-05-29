/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:05:20 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 18:12:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	char	*str= "   ~";

	ft_putstr(str);
	write(1, "\n", 1);
	if (ft_str_is_printable(str) == 0)
		ft_putstr("0");
	else if (ft_str_is_printable(str) == 1)
		ft_putstr("1");
	write(1, "\n", 1);
	return (0);
}
*/