/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:19 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/19 18:27:55 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *str, int ch, size_t n)
{
	size_t i;
	i = 0;
	while ((((const char *)str)[i]) && i < n)
	{
		if ((((char *)str)[i]) == ch)
		{
			return ((char *)str + i);
		i++;
		}
		else if ((((char *)str)[i]) != ch)
		{
			return(NULL);
		}
	}
	(((char *)str)[i]) = '\0';
	return (0);
}

