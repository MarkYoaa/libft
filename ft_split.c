/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:25:03 by mgelbart          #+#    #+#             */
/*   Updated: 2021/07/24 15:54:05 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_delimiter(char c, char del)
{
	int	i;

	i = 0;
	if (c == del || c == '\0')
		return (1);
	return (0);
}

static int	word_count(char *str, char del)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_delimiter(str[i + 1], del) == 1
			&& char_is_delimiter(str[i], del) == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char del)
{
	int	i;

	i = 0;
	while (char_is_delimiter(from[i], del) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	*write_split(char **split, char *str, char del)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
		if (char_is_delimiter(str[i], del) == 1)
			i++;
	else
	{
		j = 0;
		while (char_is_delimiter(str[i + j], del) == 0)
			j++;
		if ((split[word] = (char *)malloc(sizeof(char) * (j + 1))) == NULL)
		{
			while (word > 0)
				free(split[--word]);
			return (NULL);
		}
		write_word(split[word], str + i, del);
		i += j;
		word++;
	}
	return ((void *)1);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	char	*str;
	int		words;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	words = word_count(str, c);
	if ((res = (char **)malloc(sizeof(char *) * (words + 1))) == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == NULL)
		return (NULL);
	return (res);
}
