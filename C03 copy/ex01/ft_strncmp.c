/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:59:29 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/17 07:04:02 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1 [i] != s2 [i])
		{
			return ((unsigned char) s1 [i] - (unsigned char) s2 [i]);
		}
		if (s1 [i] == '\0' && s2 [i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
