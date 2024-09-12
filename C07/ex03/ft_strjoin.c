/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <wng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:09:45 by wng               #+#    #+#             */
/*   Updated: 2024/09/12 20:29:18 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	ft_calculate_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total_length += ft_strlen(sep);
		i++;
	}
	return (total_length);
}

void	join_strings(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[k++] = strs[i][j++];
		}
		j = 0;
		while (i < size - 1 && sep[j])
		{
			result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*result;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_length = ft_calculate_total_length(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!result)
		return (NULL);
	join_strings(size, strs, sep, result);
	return (result);
}
