/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:21:21 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/22 10:22:11 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
**#include <stdio.h>
**#include <string.h>
**
**int main () {
**   const char src[50] = "I like turtles.";
**   char dest[50];
**   strcpy(dest,"wtf is this");
**   printf("Before memcpy dest = [%s]\n", dest);
**   ft_memcpy(dest, src, strlen(src)+1);
**   printf("After memcpy dest = [%s]\n", dest);
**   
**   return(0);
**}
*/