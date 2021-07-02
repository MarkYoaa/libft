/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:25:00 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/30 16:55:10 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	if (i > size)
		return (size + ft_strlen((char *)src));
	j = 0;
	while (i + j < size - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}

/*
**#include <stdio.h>
**#include <string.h>
**int main()
**{
**    char first[] = "This is ";
**    char last[] = "a potentially long string";
**    int r;
**    int size = 16;
**    char buffer[size];
**
**    strcpy(buffer,first);
**    r = ft_strlcat(buffer,last,size);
**
**    puts(buffer);
**    printf("Value returned: %d\n",r);
**    if( r > size )
**        puts("String truncated");
**    else
**        puts("String was fully copied");
**
**    return(0);
**}
*/
