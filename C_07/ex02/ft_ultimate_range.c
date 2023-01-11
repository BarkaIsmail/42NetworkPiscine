/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:52:55 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/09 17:22:39 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i ;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (size * sizeof(int));
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
