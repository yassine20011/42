/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:36:10 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/17 07:41:08 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char	*str, char	*to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		if (str[a] == to_find[0])
		{
			b = 0;
			while (str[a + b] == to_find[b] && to_find[b] != '\0')
				b++;
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
