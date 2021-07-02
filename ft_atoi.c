/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:52:05 by mgelbart          #+#    #+#             */
/*   Updated: 2021/06/29 15:37:55 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi (const char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}

/*
 **#include <stdio.h>
 **#include <stdlib.h>
 **#include <string.h>
 **int main(){
 **	int n = ft_atoi("-2147483648");
 **	int d = atoi("-2147483648");
 **	printf("n = %d\n", n);
 **	printf("d = %d\n", d);
 **}
*/
