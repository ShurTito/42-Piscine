/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:56:30 by antferna          #+#    #+#             */
/*   Updated: 2023/02/14 20:16:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i < size)
		i++;
	return (i);
}

unsigned int	ft_strlen2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	l = ft_strlen(dest, size) + ft_strlen2(src);
	if (size > 0)
	{
		i = 0;
		j = 0;
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (l);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char a[] = "12345";
    char b[] = "1234567890123";
    int l;
    int size = 10;
    char dest[size];

	strcpy(dest, a);
	l = strlcat(dest, b, size);
	//l = ft_strlcat(dest, b, size);
	printf("%s\n", dest);
	printf("Value returned: %d\n", l);
	if (l > size - 1)
		puts("String truncated");
	else
		puts("String was fully copied");
	return (0);
}
*/