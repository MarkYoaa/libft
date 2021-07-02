/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:24:01 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/30 16:52:33 by mgelbart         ###   ########.fr       */
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

/*
** #include <stdio.h>
** 
** int main()
** {
**     char str[] = "testtest";
**     int characters = ft_strlen(str);
**     printf("length of string: %d\n", characters);
**     return 0;
** }
** 
*/
