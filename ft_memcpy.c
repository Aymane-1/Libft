/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:10:13 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/04 18:46:50 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	i = 0;
	while(i < n)
	{
		(((char *)dest)[i]) = (((char *)src)[i]);
		i++;
	}
	return(dest);
}
