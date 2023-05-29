/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:37:37 by antferna          #+#    #+#             */
/*   Updated: 2023/02/20 14:09:41 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				x;
	unsigned int	i;

	i = 0;
	x = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			return (x);
		}
		i++;
	}
	if (i < n && s1[i] == '\0' && s2[i] != '\0')
		return (s2[i] * -1);
	else if (i < n && s1[i] != '\0' && s2[i] == '\0')
		return (s1[i]);
	return (x);
}

#include<stdio.h>
#include<string.h>

int	main(void) {
	char leftStr[] = "tolakase";
	char rightStr[] = "holakas";
	int n =0;
	int result;
	result = ft_strncmp(leftStr, rightStr, n);
	if (result == 0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by ft_strncmp() is: %d\n" , result);
	result = strncmp(leftStr, rightStr, n);
	if (result == 0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by strncmp() is: %d\n" , result);
	return (0);
}
