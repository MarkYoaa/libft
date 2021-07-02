/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:01:39 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/29 15:37:16 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint (int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	else
		return (0);
}

/*
**#include <stdio.h>
**int	main()
**{
**	char c;
**	c = 31;
**	printf("%d", ft_isprint(c));
**}
*/