/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 02:08:17 by ansoulim          #+#    #+#             */
/*   Updated: 2022/10/12 06:31:22 by ansoulim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*cast_ptr;

	cast_ptr = (char *)b;
	while (len > 0)
	{
		cast_ptr[len - 1] = c;
		len--;
	}
	return (b);
}
