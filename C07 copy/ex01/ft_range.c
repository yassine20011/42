/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:21:19 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/25 11:22:56 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	*ptr;
	int	i;
	int	sv;

	if (min >= max)
		return (0);
	len = max - min;
	ptr = (int *) malloc(len * sizeof (int));
	i = 0;
	sv = min;
	while (i < max)
	{
		ptr[i] = sv;
		i++;
		sv++;
	}
	return (ptr);
}

/*
int main()
{
    int i;
    int min =  9;
    int max =  99;
    int len = max - min;
    int *ptr = ft_range(min, max);

    i = 0;
    while (i < len)
    {
        printf("%d", ptr[i]);
        printf("%c", '-');
        //printf("%c", '\n');
        i++;
    }
}
*/
