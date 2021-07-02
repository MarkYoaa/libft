/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:10:35 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/24 12:19:17 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*dst, const	char	*src, unsigned int	dstsize)
{
	unsigned int	i;

	if (!src || !dst)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
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