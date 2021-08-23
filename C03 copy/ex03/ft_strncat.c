/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:39:43 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/14 08:24:24 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	j;

	a = 0;
	j = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0' && nb > j)
	{
		dest[a] = src[j];
		a++;
		j++;
	}	
	dest[a] = '\0';
	return (dest);
}
