/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <wng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:40:41 by wng               #+#    #+#             */
/*   Updated: 2024/09/12 20:27:49 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	i = max - min;
	range = (int *)malloc(sizeof(int) * i);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
