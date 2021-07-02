/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:10:07 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/30 13:40:41 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
**#include <stdio.h>
**#include <string.h>
**
**int main () {
**   char str1[15];
**   char str2[15];
**   int ret;
**
**   memcpy(str1, "abcdefghija", 13);
**   memcpy(str2, "abcdefgxyz", 13);
**
**   ret = ft_memcmp(str1, str2, 7);
**
**   if(ret > 0) {
**      printf("str2 is less than str1");
**   } else if(ret < 0) {
**      printf("str1 is less than str2");
**   } else {
**      printf("str1 is equal to str2");
**   }
**   
**   return(0);
**}
*/
