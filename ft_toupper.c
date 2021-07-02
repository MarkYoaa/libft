/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:54:55 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/29 16:50:15 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_toupper (int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	else
		return (c);
}

/*
**#include <stdio.h>
**int	main()
**{
**	char c;
**	c = 'g';
**	printf("%c", ft_toupper(c));
**}
*/