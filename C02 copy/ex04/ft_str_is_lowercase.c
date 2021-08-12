/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:32:54 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/10 10:57:33 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	n;

	n = ft_strlen(str);
	if (n == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122 ))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
