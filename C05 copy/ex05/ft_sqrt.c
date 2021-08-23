/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:39:20 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/22 11:14:27 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

int	ft_sqrt(int nb)
{
	long int	a;
	long int	y;

	a = 1;
	if (nb == 0)
		return (0);
	while (a * a < nb)
		a++;
	y = ft_recursive_power(a, 2);
	if (y == nb)
		return (a);
	else
		return (0);
}
