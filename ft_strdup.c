/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:35:12 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/20 13:03:58 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strdup(const char *src)
{   
    size_t i;
	int len;
    char *ptr;

    i = 0;
	len = ft_strlen(src);
    ptr = (char *)malloc((len + 1) * sizeof(char));
	if(!ptr)
		return(NULL);
	while(src[i])
	{
		ptr[i] = src[i];
		i++;
    }
	ptr[i]= '\0';
	return(ptr);
}

