/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:30:18 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/07 14:35:08 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t result;
	size_t t1;
	i = 0;
	j = 0;
	t1 =ft_strlen(src);
	result = ft_strlen(src) + ft_strlen(dest);
	if(size ==0)
		return(t1);
	while(dest[i])
		i++;
		while(src[j] && j < size - 1)
	{
		dest[i + j] = (src[j]);
		j++;
	}
		dest[i + j] = '\0';
	return(i + j);
}

