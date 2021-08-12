/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:11:36 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/11 13:41:29 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;

	d = 0;
	s = 0;
	while (src[s])
		s++;
	d = s;
	s = 0;
	if (size > 0)
	{
		while (s < size - 1)
		{
			dest[s] = src[s];
			s++;
		}
		dest[s] = '\0';
	}
	return (d);
}
