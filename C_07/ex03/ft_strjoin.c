/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:57:04 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/11 18:57:47 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_count_chars(int size, char **strs)
{
	int	i;
	int	j;
	int	count_chars;

	i = 0;
	count_chars = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			count_chars++;
			j++;
		}
		i++;
	}
	return (count_chars);
}

int	ft_count_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*s;

	i = 0;
	total_size = 0;
	if (size == 0)
	{
		s = malloc(sizeof(char));
		*s = '\0';
		return (s);
	}
	total_size = ft_count_chars(size, strs) + (ft_count_sep(sep) * (size - 1));
	s = (char *)malloc((total_size + 1) * sizeof(char));
	if (!s)
		return (NULL);
	*s = '\0';
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i != size -1)
			ft_strcat(s, sep);
		i++;
	}
	return (s);
}
