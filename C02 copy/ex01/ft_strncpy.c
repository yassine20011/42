/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:10:55 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/12 17:12:03 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (dest[a])
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
