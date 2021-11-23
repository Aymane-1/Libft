/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:18:38 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/23 21:44:10 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strchr(const char *str, int ch)
{
	int i;
	int count;

	i = 0;
	count = ft_strlen(str);
	if(ch == 0)
		return ((char *)str + count);
	while (i < count && str[i])
	{
		if (str[i] == (unsigned char)ch)
			return ((char *) str + i);
		i++;
	}
	return (0);
}
