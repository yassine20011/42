/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:07:44 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/21 16:51:52 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	st_swaap(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	j = 1;
	i = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (ac - 1 > i)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				swap = av[i + 1];
				av[i + 1] = av[i];
				av[i] = swap;
			}
			i++;
		}
		j++;
	}
}

int	main(int	ac, char **av)
{
	int	i;

	st_swaap(ac, av);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
