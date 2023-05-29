/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:31:43 by antferna          #+#    #+#             */
/*   Updated: 2023/02/22 13:35:03 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int v[0] = i; v[1] = len; v[2] = pos;
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		v[3];

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	v[1] = ft_strlen(strs[0]);
	v[0] = 1;
	while (v[0] < size)
		v[1] += ft_strlen(sep) + ft_strlen(strs[v[0]++]);
	result = (char *)malloc(sizeof(char) * (v[1] + 1));
	v[0] = -1;
	v[2] = 0;
	while (++v[0] < size)
	{
		ft_strcpy(result + v[2], strs[v[0]]);
		v[2] += ft_strlen(strs[v[0]]);
		if (v[0] < size - 1)
		{
			ft_strcpy(result + v[2], sep);
			v[2] += ft_strlen(sep);
		}
	}
	result[v[1]] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Usage: %s separator str1 [str2 ...]\n", argv[0]);
		return (1);
	}
	char	*sep = argv[1];
	char	**strs = &argv[2];
	int		size = argc - 2;
	char	*result = ft_strjoin(size, strs, sep);
	if (result == NULL)
    {
        printf("Error: ft_strjoin returned NULL\n");
        return (1);
    }
    printf("Result: %s\n", result);
    free(result);
    return (0);
}
*/
