/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamjad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:33:45 by yamjad            #+#    #+#             */
/*   Updated: 2021/08/25 11:35:54 by yamjad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	len = max - min;
	*range = (int *)malloc(sizeof (int) * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		(*range)[j] = min;
		min++;
		j++;
	}
	return (len);
}

/*
int main()
{
    int min;
    int max;
    int *range;
    int i;

    i = 0;
    min = 4;
    max = 10;
    printf("%d\n",ft_ultimate_range(&range, min, max));
    // **&range == *range
    while (min < max)
    {
        printf("%d",range[i]);
        min ++;
        i++;
    }
}
*/
