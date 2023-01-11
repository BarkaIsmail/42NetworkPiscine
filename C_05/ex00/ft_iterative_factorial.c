/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:54:37 by isbarka           #+#    #+#             */
/*   Updated: 2022/07/31 17:19:19 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		while (i > 0)
		{
			res = res * i;
			i--;
		}
		return (res);
	}
}
