/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:03:54 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/06 09:52:44 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i ;

	i = 2 ;
	if (nb == 2147483647)
		return (1);
	if (nb > 1)
	{
		while (i <= (nb / i))
		{
			if (nb % i == 0)
				return (0);
				i++;
		}	
		return (1);
	}
	return (0);
}

int	ft_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
