/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:10:08 by antferna          #+#    #+#             */
/*   Updated: 2023/02/14 17:51:19 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = ft_strlen(to_find);
	if (l == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (j == l)
				return (str + i - j + 1);
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void) {
	char str1[] = "Tutorialsto4r5437685384gfdsglsfuytew87fg3uyfguydg";
	char str2[] = "ls";
	char* ptr;

	//ptr = strstr(str1, str2);
	ptr = ft_strstr(str1,str2);
	if (ptr) {
		printf("String is found\n");
		printf("The occurrence of string '%s' in '%s' is '%s'", str2, str1, ptr);
	}
	else
		printf("String not found\n");
	return (0);
}
*/