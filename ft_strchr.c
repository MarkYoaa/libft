/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:33:26 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/01 12:41:22 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}

/*
**#include <stdio.h>
**
**int main () {
**   const char str[] = "test.hallo";
**   const char ch = '.';
**   char *ret;
**
**   ret = ft_strchr(str, ch);
**
**   printf("String after %c is %s\n", ch, ret);
**
**   return(0);
**}
*/
