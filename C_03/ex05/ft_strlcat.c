/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:26:21 by isbarka           #+#    #+#             */
/*   Updated: 2022/07/30 02:22:15 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	dest_length = j;
	while (src[k] != '\0')
		k++;
	src_length = k;
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[j] = src[i];
			i++;
			j++;
	}
	dest[j] = '\0';
	return (dest_length + src_length);
}
