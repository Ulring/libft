/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:37:03 by ansoulim          #+#    #+#             */
/*   Updated: 2022/10/12 13:36:28 by ansoulim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (j <= start)
		len = 0;
	if (len > (j - start))
		len = (j - start);
	sub = malloc(sizeof(*sub) * (len + 1));
	if (!sub)
		return (NULL);
	while (len-- > 0)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[i] = 0;
	return (sub);
}
