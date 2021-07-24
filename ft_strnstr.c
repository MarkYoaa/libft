/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:43:03 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/08 19:09:56 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = ft_strlen(little);
	while (*big != '\0' && len-- >= i)
	{
		if (*big == *little && ft_strncmp(big, little, i) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/*
**#include <stdio.h>
**int main()
**{
**	char big[30] = "pen pineapple apple pen!";
**
**	char* ptr = ft_strnstr(big, "pine", 10);
**	printf("%s\n", ptr);
**	char* ptr1 = ft_strnstr(big, "pine", 5);
**	printf("%s\n", ptr1);
**
**	return (0);
**}
*/
