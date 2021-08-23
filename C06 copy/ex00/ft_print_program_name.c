/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:00:46 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/22 12:07:29 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	write(1, str, i);
}

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		ft_putstr(av[0]);
		ft_putstr("\n");
	}
	return (0);
}
