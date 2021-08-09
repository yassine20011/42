/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:45:52 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/05 16:24:55 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a++ < '8')
	{
		b = a;
		while (b++ < '9')
		{
			c = b;
			while (c++ <= '9')
			{
				fchar(a - 1);
				fchar(b - 1);
				fchar(c - 1);
				if (a != '8')
				{
					fchar(',');
					fchar(' ');
				}			
			}
		}	
	}
}
