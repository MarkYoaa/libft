/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:24:11 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/24 13:50:47 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
**if (str1 > str2) takes care of overlapping memory blocks
*/

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned int	i;

	if (!str1 && !str2)
		return (NULL);
	if (str1 > str2)
	{
		while (len > 0)
		{
			((char *)str1)[len - 1] = ((char *)str2)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
