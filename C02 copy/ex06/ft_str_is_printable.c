/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:21:57 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/10 11:55:52 by yamjad           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
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
		if ((str[i] >= 32 && str[i] <= 127 ))
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
