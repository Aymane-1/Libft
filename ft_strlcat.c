/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:30:18 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/21 18:51:10 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(size == 0)
		return(ft_strlen(src));
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
