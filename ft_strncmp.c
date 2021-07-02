/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:34:56 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/01 12:35:47 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*
**#include <stdio.h>
**#include <string.h>
**
**int	main()
**{
**	char i[] = "zyxbcdefgh";
**	char j[] = "abcdwxyz";
**	unsigned int num = 5;
**	
**	printf("%d\n", ft_strncmp(i, j, num));
**	printf("%d\n", strncmp(i, j, num));
**	return(0);
**}
*/
