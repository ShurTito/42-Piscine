/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:38:04 by antferna          #+#    #+#             */
/*   Updated: 2023/02/14 13:30:50 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (s2[i] * -1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i]);
	return (n);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void) {
	char leftStr[] = "";
	char rightStr[] = "Hello World";
	int result = ft_strcmp(leftStr, rightStr);
	//int result = strcmp(leftStr, rightStr);
	if (result == 0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by strcmp() is: %d" , result);
	return (0);
}
*/