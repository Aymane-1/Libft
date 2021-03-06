/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:19:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 11:36:56 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	length;
	char			*ptr;

	if (!s)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	if (len > length)
		len = length;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (ptr);
	while (s[i] && i < len && start <= length)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
