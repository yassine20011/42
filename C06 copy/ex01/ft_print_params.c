/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:03:31 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/21 15:06:51 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int	ac, char	**av)
{
	int	a;

	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
