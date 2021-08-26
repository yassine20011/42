/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:48:16 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/26 08:36:19 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int	len_strs(int size, int size_strs, char **strs)
{
	int	i;

	i = 0;
	while (i < size)
	{
		size_strs = size_strs + ft_strlen(strs[i]);
		i++;
	}
	return (size_strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		size_strs;
	int		size_sep;
	int		i;
	int		a;

	a = 0;
	size_strs = 0;
	size_sep = 0;
	size_sep = ft_strlen(sep);
	i = 0;
	len_strs(size, size_strs, strs);
	ptr = (char *)malloc(sizeof(char) *(size_strs + size_sep * (size - 1) + 1));
	*ptr = 0;
	while (a < size)
	{
		ft_strcat(ptr, strs[a]);
		if (a < size - 1)
			ft_strcat(ptr, sep);
		a++;
	}
	return (ptr);
}

/*
int main(void)
{
	char *strs[] = {"123", "456", "789", "78"};
	char sep[] = "-";
	int size = 4;
	printf("%s", ft_strjoin(size, strs, sep));
}
*/
