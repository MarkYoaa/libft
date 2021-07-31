/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:00:48 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/27 11:19:27 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	doing_math(int nbr, char *str, size_t *i, int sign)
{
	int		tmp;

	if (nbr > 9 || nbr < -9)
	{
		tmp = nbr % 10 * sign;
		nbr = nbr / 10;
		doing_math(nbr, str, i, sign);
	}
	else
		tmp = nbr % 10 * sign;
	str[*i] = tmp + '0';
	*i = *i + 1;
}

char	*ft_itoa(int n)
{
	char	str[12];
	char	*result;
	size_t	i;
	int		sign;

	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i += 1;
		sign = -1;
	}
	else
		sign = 1;
	doing_math(n, str, &i, sign);
	str[i] = '\0';
	result = ft_strdup(str);
	return (result);
}
