/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:49:35 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/24 14:35:21 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	buff = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buff[i] = 0;
		i++;
	}
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
