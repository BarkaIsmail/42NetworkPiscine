/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:56:18 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/06 13:17:12 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{	
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s, char **a)
{
	char	*temp;

	temp = *s;
	*s = *a;
	*a = temp;
}

int	main(int ac, char **av)
{
	int	j;
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac -1)
		{
			if ((ft_strcmp(av[j], av[j + 1]) > 0))
				ft_swap (&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
