/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:49:35 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/24 12:39:33 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*(ptr++) = 0;
}

/*
**#include <stdio.h>
**#include <string.h>
**int main () {
**  char str[50];
**
**   strcpy(str,"I like turtles.");
**   puts(str);
**
**   ft_bzero(str, 3);
**   write(1, &str, 16);
**   
**   return(0);
**}
*/
