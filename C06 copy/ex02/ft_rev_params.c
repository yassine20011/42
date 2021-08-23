/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 08:27:51 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/21 17:21:54 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (ac - 1 != i)
	{
		ft_putstr(av[ac - 1]);
		ft_putstr("\n");
		ac--;
	}
	return (0);
}
