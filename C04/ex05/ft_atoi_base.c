/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:37:26 by antferna          #+#    #+#             */
/*   Updated: 2023/02/23 17:09:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_position_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
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

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (0);
		i++;
	}
	return (1);
}

//var[0] = i, var[1] = n, var[2] = negative, var[3] = baselen
int	ft_atoi_base(char *str, char *base)
{
	int	var[4];

	var[1] = 0;
	var[2] = 1;
	if (ft_is_base_valid(base) == 0)
	{
		var[3] = ft_strlen(base);
		var[0] = 0;
		while (str[var[0]] != '\0' && (str[var[0]] == ' ' || str[var[0]] == '\f'
				|| str[var[0]] == '\n' || str[var[0]] == '\r'
				|| str[var[0]] == '\t' || str[var[0]] == '\v'))
			var[0]++;
		while (str[var[0]] && (str[var[0]] == '+' || str[var[0]] == '-'))
		{
			if (str[var[0]] == '-')
				var[2] *= -1;
			var[0]++;
		}
		while (str[var[0]] != '\0' && ft_is_in_base(str[var[0]], base) == 0)
		{
			var[1] *= var[3];
			var[1] += ft_position_in_base(str[var[0]++], base);
		}
	}
	return (var[1] * var[2]);
}
/*
#include <stdio.h>

int main (void)
{
	char cadena[] = " ---++-++---++--+80000000~8034Eab567";	

	char* base = "0123456789ABCDEF"; // base hexadecimal
	//char* base = "0123456789"; // base decimal
	//char* base = "01"; // base binaria
	//char* base = "01234567"; // base octal
	//char* base = "poniguay"; // base octalxD
	//char* base = "01231456"; // base fallo
	//char* base = ""; // base vacia
	//char* base = "1"; // base de 1 = error

	int n = ft_atoi_base(cadena, base);

	printf("%d\n", n);
	return (0);
}
*/
