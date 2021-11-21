/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:19 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/21 16:56:46 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *str, int ch, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((char *)str)[i])
	{
		if ((((unsigned char *)str)[i]) == (unsigned char)ch)
			return ((unsigned char *)str + i);
		i++;
	}
		if ((((unsigned char *)str)[i]) ==  (unsigned char)ch)
			return((unsigned char *)str + i);
	//(((unsigned char *)str)[i]) = '\0';
	return(0);
}
                  
