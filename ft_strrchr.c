/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:31:29 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/02 17:42:15 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (str[i] != c && i >= 0)
	{
		i--;
	}
	if (i == -1)
		return (NULL);
	return ((char *)&str[i]);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main () {
**   
**   const char str[] = "lul.whut.this";
**   const char str[] = "bonjour";
**   const char ch = 'j';
**   char *ret;
**
**   ret = ft_strrchr(str, ch);
**
**   printf("String after |%c| is - |%s|\n", ch, ret);
**   
**   return(0);
**}
*/
