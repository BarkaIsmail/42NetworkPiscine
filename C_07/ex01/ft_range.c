/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:54:17 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/09 15:52:00 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*srt;
	int	i;
	int	eq;

	eq = max - min;
	i = 0;
	srt = NULL;
	if (eq <= 0)
		return (0);
	srt = malloc (eq * sizeof(int));
	while (i < eq)
	{
		srt[i] = min;
		min++;
		i++;
	}
	return (srt);
}
