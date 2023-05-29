/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:14:58 by antferna          #+#    #+#             */
/*   Updated: 2023/02/14 14:42:33 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	l = i;
	while (src[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	dest[] = "12345";
	unsigned int n;

	n = *argv[2] - 48;
	printf("%d <-argc\n",argc);
	printf("%c <-argv2\n", *argv[2]);
	printf("%d <-n\n",n);
	printf("%s <-dest\n",dest);
	printf("%s <-src\n",argv[1]);
	printf("%u <-l\n",ft_strlcpy(dest, argv[1], n));
	printf("%s <-dest\n",dest);
	return (0);
}
