/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:23:12 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/31 11:55:40 by mgelbart         ###   ########.fr       */
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
