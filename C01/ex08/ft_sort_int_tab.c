/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:08:24 by antferna          #+#    #+#             */
/*   Updated: 2023/02/09 11:59:32 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
#include <unistd.h>
int	main(void)
{
	int		*tab;
	int		array[8] = {9,3,7,2,4,0,5,1};
	int		i;
	char	c;

	tab = array;
	i = 0;
	while (i < 8)
	{
		c = tab[i]+'0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	ft_sort_int_tab(tab, 8);
	i = 0;
	while (i < 8)
	{
		c = tab[i]+'0';
		write(1, &c, 1);
		i++;
	}
	return (0);
}
*/