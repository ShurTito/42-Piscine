/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:11:14 by antferna          #+#    #+#             */
/*   Updated: 2023/02/21 14:33:56 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(4 * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
/*
#include <stdio.h>

int main(int argc, char **argv) {
	int size = 0;
	if (argc > 2)
	{
    	int *arr = ft_range(atoi(argv[1]),atoi(argv[2]));
		if (argv[1] <= 0)
			size = atoi(argv[2]) +atoi( argv[1]);
		else
			size = atoi( argv[2]) - atoi(argv[1]);
		if (arr != NULL)
		{
    		printf("El contenido del array es: ");
    		for (int i = 0; i < size; i++) {
        		printf("%d ", arr[i]);
    		}
   			printf("\n");
		}
		else
			printf("Valores incorrectos");
	}
    return 0;
}
*/
