/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:33:05 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/06 10:03:42 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i ;

	ac = 0;
	i = 0;
	while (av[0][i] != '\0')
	{
		write (1, &av[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (ac);
}
