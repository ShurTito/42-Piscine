/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:57:14 by antferna          #+#    #+#             */
/*   Updated: 2023/02/21 18:31:11 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i++] = min++;
	}
	*range = arr;
	return (size);
}
/*
#include <stdio.h>

int main(int argc, char **argv) {
	if (argc > 2)
	{
		int *arr = NULL;
		int size = ft_ultimate_range(&arr,atoi(argv[1]),atoi(argv[2]));
		if (arr != NULL)
		{
    		printf("El contenido del array es: ");
    		for (int i = 0; i < size; i++) {
        		printf("%d ", arr[i]);
    		}
   			printf("\n");
		}
		else
			printf("Valores incorrectos -> size = %d",size);
	}
    return 0;
}
*/
