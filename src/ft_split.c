/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:34:53 by ansoulim          #+#    #+#             */
/*   Updated: 2022/10/12 08:48:46 by ansoulim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*duplicate(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**freeleft(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	countwords(char const *s, char c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!strings)
		return (NULL);
	while (i < countwords(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		start = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		strings[i] = duplicate(&s[start], k - start);
		if (strings[i++] == 0)
			return (freeleft(strings));
	}
	strings[i] = NULL;
	return (strings);
}
