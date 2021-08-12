/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:02:33 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/12 09:34:02 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
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
		if ((str[i] >= 48 && str[i] <= 57 ))
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
