/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:25:12 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/19 10:28:34 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		a = nb * a;
		i++;
	}
	return (a);
}