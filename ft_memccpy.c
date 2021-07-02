/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:45:13 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/30 15:11:25 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Copies characters from the object pointed to by src
**to the object pointed to by dst, stopping after any
**of the next two conditions are satisfied:
**
**	count characters are copied
**	the character (unsigned char)c is found (and copied).
**
**The src and dst objects are interpreted as arrays of unsigned char.
**
**The behavior is undefined if any condition is met:
**
**	access occurs beyond the end of the dst array;
**	the objects overlap (which is a violation of the restrict contract)
**	either dst or src is an invalid or null pointer
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	src_c = (unsigned char *)src;
	dst_c = (unsigned char *)dst;
	i = 0;
	while (i < n && src_c[i] != (unsigned char)c)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dst_c[i] = src_c[i];
		i++;
		return (&dst_c[i]);
	}
}

/*
**#include <stdio.h>
**#include <string.h>
**
**int main () {
**   const char src[50] = "I like turtles.";
**   char dest[50];
**   strcpy(dest,"wtf is this");
**   printf("Before memcpy dest = %s\n", dest);
**   ft_memccpy(dest, src, strlen(src)+1, 6);
**   printf("After memcpy dest = %s\n", dest);
**   
**   return(0);
**}
*/
