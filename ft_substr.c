/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:19:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/21 17:42:43 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	unsigned int length;
	char *ptr;

	i = 0;
	length = ft_strlen(s);
	ptr = (char*)malloc(len + 1);
	if (!ptr)
		return(ptr);
	while(s[i] && i < len && start <= length)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return(ptr);
}
