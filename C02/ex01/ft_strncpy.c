/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:27:40 by antferna          #+#    #+#             */
/*   Updated: 2023/02/13 19:40:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] ="";
	char	src[]= "qwerty";

	printf("%s\n",dest);
	printf("%s\n",src);
	ft_strncpy(dest, src, 9);
	printf("%s\n",dest);
	printf("%s\n",src);
	return (0);
}
*/