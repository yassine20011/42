/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:11:58 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/11 12:33:14 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	strupcase(char	*str, int	i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			strupcase(str, i);
		}
		else if (((str[i - 1] < '0' || str[i - 1] > '9'))
			&& ((str[i - 1] < 'A' || str[i - 1] > 'Z'))
			&& ((str[i - 1] < 'a' || str[i - 1] > 'z')))
		{
			strupcase(str, i);
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
