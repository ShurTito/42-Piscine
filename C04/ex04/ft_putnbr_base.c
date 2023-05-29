/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:53:43 by antferna          #+#    #+#             */
/*   Updated: 2023/02/23 17:04:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_rev_str(char *str, int size)
{
	char	aux;
	int		i;

	i = 0;
	while (i < size / 2)
	{
		aux = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = aux;
		i++;
	}
	str[size] = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (j != i && base[j] == base[i])
				return (1);
			j++;
		}
		if (base[i] == '+' || base [i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	char	resultado[32];
	int		i;

	i = 0;
	if (ft_is_base_valid(base) == 0)
	{
		baselen = ft_strlen(base);
		if (nbr == 0)
			resultado[i++] = base[0];
		else if (nbr < 0)
		{
			write(1, "-", 1);
			resultado[i++] = base[(nbr % baselen) * -1];
			nbr = (nbr / baselen) * -1;
		}
		while (nbr > 0 && i < 31)
		{
			resultado[i++] = base[nbr % baselen];
			nbr /= baselen;
		}
		resultado[i] = '\0';
		ft_rev_str(resultado, i);
		ft_putstr(resultado);
	}
}
/*
int	main(void) {
	int num = 2147483647;
	char* base = "0123456789ABCDEF"; // base hexadecimal
	//char* base = "0123456789"; // base decimal
	//char* base = "01"; // base binaria
	//char* base = "poniguay"; // base octalxD
	//char* base = "01231456"; // base fallo
	//char* base = ""; // base vacia
	//char* base = "1"; // base de 1 = error

    ft_putnbr_base(num, base);
    return (0);
}
*/
