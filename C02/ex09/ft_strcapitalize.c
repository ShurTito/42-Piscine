/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:19:49 by antferna          #+#    #+#             */
/*   Updated: 2023/02/13 17:07:13 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((ft_is_alphanumeric(str[i - 1]) == 0)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((ft_is_alphanumeric(str[i - 1]) == 1)
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[]= "sAL8Ut, comN8~ent tu vaUs ? 42mo5ts te-deux; cinquante+et+un";

	printf("%s\n",str);
	printf("%s\n",ft_strcapitalize(str));
	return (0);
}

*/