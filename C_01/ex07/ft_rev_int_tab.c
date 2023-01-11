/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:44:55 by isbarka           #+#    #+#             */
/*   Updated: 2022/07/23 13:32:24 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0 ;
	while (i < (size / 2))
	{
	swap = tab[i];
	tab[i] = tab[size -1 - i];
	tab[size - 1 - i] = swap;
	i++;
	}	
}
