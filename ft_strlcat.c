/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:30:18 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/22 14:23:51 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(src);
	j = ft_strlen(dest);
	if(size == 0)
		return(i);
	while(dest[i])
		i++;
		while(src[j] && j < size - 1)
		{
		dest[i + j] = src[j];
		j++;
		}
		dest[i + j] = '\0';
	return(dest[i + j]);
}
*/
size_t    ft_strlcat(char *dst, const char *src, size_t dest_size)
{
    size_t i;
    size_t j;

    i = ft_strlen(src);
    j = ft_strlen(dst);
    if (dest_size == 0 || j > dest_size)
        return(i + dest_size);
    while (dst[j])
        j++;
    i = 0;
    while (src[i] &&  j + i < dest_size - 1)
    {
        dst[j + i] = src[i];
        i++;

    }
    dst[j + i] = '\0';
    return (j + ft_strlen(src));
}
