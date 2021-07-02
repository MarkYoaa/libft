/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:32:21 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/30 13:28:33 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
**#include <string.>
**int main () {
**    const char str[] = "thanks.Dom";
**    const char ch = '.';
**    char *re
**    ret = ft_memchr(str, ch, strlen(str)
**    printf("String after |%c| is - |%s|\n", ch, ret);
**	int tab[7] = {-49, 49, 1, -1, 0, -2, 2
**	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
**	// printf("%s\n", (char *)memchr(tab, -1, 7)
**   return(0);
**}
*/
