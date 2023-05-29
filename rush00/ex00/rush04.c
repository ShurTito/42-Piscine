/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:12:03 by antferna          #+#    #+#             */
/*   Updated: 2023/02/04 16:12:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	px;
	int	py;

	px = 0;
	py = 0;
	while (py < y)
	{
		while (px < x)
		{
			if (px == 0 && py == 0)
				ft_putchar('A');
			else if (px == x - 1 && py == y - 1 && x != 1 && y != 1)
				ft_putchar('A');
			else if ((px == x - 1 && py == 0) || (px == 0 && py == y - 1))
				ft_putchar('C');
			else if ((px == 0 || px == x - 1) || (py == 0 || py == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			px++;
		}
		ft_putchar('\n');
		px = 0;
		py++;
	}
}
