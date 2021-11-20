/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:18:38 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/20 12:12:54 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strchr(const char *str, int ch)
{
	int i;
	int count;

	i = 0;
	count = ft_strlen(str) + 1;
	while (i < count)
	{
		if (str[i] == ch)
			return ((char *) str + i);
		i++;
	}
	return (0);
}
