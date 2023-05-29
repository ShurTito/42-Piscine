/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:41:03 by antferna          #+#    #+#             */
/*   Updated: 2023/02/13 16:23:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] ="567765";
	char	src[]= "adfdsfdsgdfhgfds";

	printf("%s\n",dest);
	printf("%s\n",src);
	ft_strcpy(dest, src);
	printf("%s\n",dest);
	printf("%s\n",src);
	return (0);
}
*/