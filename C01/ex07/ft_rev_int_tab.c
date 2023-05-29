/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:24:52 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 11:58:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = aux;
		i++;
	}
}
/*
#include <unistd.h>
int	main(void)
{
	int		*tab;
	int		array[11] = {0,1,2,3,4,5,6,7,8,9,6};
	int		i;
	char	c;

	tab = array;
	i = 0;
	while (i < 11)
	{
		c = tab[i]+'0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	ft_rev_int_tab(tab, 11);
	i = 0;
	while (i < 11)
	{
		c = tab[i]+'0';
		write(1, &c, 1);
		i++;
	}
	return (0);
}
*/