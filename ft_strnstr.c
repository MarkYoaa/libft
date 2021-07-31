/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:43:03 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/31 11:56:36 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = ft_strlen(little);
	while (*big != '\0' && len-- >= i)
	{
		if (*big == *little && ft_strncmp(big, little, i) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
