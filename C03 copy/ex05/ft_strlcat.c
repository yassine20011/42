/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:07:55 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/17 07:44:31 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;

	s = 0;
	d = 0;
	while (src[s])
		s++;
	while (dest[d])
		d++;
	i = 0;
	if (size == 0)
		return (s);
	if (d < size)
		s += d;
	else
		s += size;
	while (src[i] && d < size - 1)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (s);
}
