/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:10:35 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/24 14:52:08 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
**#include <stdio.h>
**
**int    main(void)
**{
**    char oldstr[20] = "CopyText123";
**    char newstr1[20];
**    char newstr2[20];
**
**ft_strlcpy(&newstr1[0], &oldstr[0], 10);
**printf("ft_strlcpy: %s \n", &newstr1[0]);
**
**ft_strlcpy(&newstr2[0], &oldstr[0], 10);
**printf("strlcpy (ORIGINAL): %s \n", &newstr2[0]);
**}
*/