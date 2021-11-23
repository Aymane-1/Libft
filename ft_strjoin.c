/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:13:27 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/23 21:59:34 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	int dest_len;
	char *ptr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ptr = (char *)malloc(sizeof(char) * (dest_len + 1));
	if(!ptr)
		return(ptr);
	while(s1[i])
	{	
		ptr[i]= s1[i];
		i++;
	}
	while(s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0'; 
	return (ptr);
}

