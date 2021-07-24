/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:23:12 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/24 12:23:21 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**pointer variable pointing now to the memory block of b
**
**using len as a variable to count
**
**incrementing the pointer so it points to the next char and so on
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len--)
		*(ptr++) = (unsigned char)c;
	return (b);
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
**   ft_memset(str,'#',6);
**   puts(str);
**   
**   return(0);
**}
*/
