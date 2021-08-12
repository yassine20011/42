/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:06:01 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/10 12:42:47 by yamjad           ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
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
		if ((str[i] >= 65 && str[i] <= 90 ))
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
