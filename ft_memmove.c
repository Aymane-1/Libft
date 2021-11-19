/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:47:41 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/11 16:53:38 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while(((char *)src)[count])
	{
		count++;
	}
	i = count;
	while(i >= len)
	{
		(((char *)dest)[i]) = (((char *)src)[i]);
		i--;
	}
	return (dest);
}