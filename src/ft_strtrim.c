/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:36:34 by ansoulim          #+#    #+#             */
/*   Updated: 2022/10/12 07:58:04 by ansoulim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	is_available(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	j = ft_strlen(s1);
	while (s1[i] && is_available(s1[i], set))
		i++;
	while (j >= 1 && s1[j - 1] && is_available(s1[j], set) && i < j)
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
