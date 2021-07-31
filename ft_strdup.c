/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:36:52 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/31 11:56:01 by mgelbart         ###   ########.fr       */
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
