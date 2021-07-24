/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:36:52 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/11 13:49:18 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str1)
{
	char	*dub;

	dub = malloc(sizeof(char) * ft_strlen(str1) + 1);
	ft_strlcpy(dub, str1, ft_strlen(str1) + 1);
	return (dub);
}

/*
**#include <stdio.h>
**int main()
**{
**	char test[] = "abcd";
**	printf("%s", ft_strdup(test));
**}
*/
