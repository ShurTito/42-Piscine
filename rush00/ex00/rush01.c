/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:34:18 by antferna          #+#    #+#             */
/*   Updated: 2023/02/03 18:52:29 by antferna         ###   ########.fr       */
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
				ft_putchar('/');
			else if (px == x - 1 && py == y - 1 && x != 1 && y != 1)
				ft_putchar('/');
			else if ((px == x - 1 && py == 0) || (px == 0 && py == y - 1))
				ft_putchar('\\');
			else if ((px == 0 || px == x - 1) || (py == 0 || py == y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			px++;
		}
		ft_putchar('\n');
		px = 0;
		py++;
	}
}
