/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:31:33 by antferna          #+#    #+#             */
/*   Updated: 2023/02/13 16:23:47 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	//char	dest[] = "";
	//char	src[]= argv[1];

	printf("%d <-argc\n",argc);
	printf("%s <-str\n",argv[1]);
	ft_putstr_non_printable(argv[1]);
	return (0);
}
*/