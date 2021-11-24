/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:33 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 11:43:24 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_within_s1(const char *str, char ch)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		length;
	int		start;
	int		end;
	char	*ptr;

	i = 0;
	start = i;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_is_within_s1(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_is_within_s1(set, s1[end]) == 1)
		end --;
	length = (end - start) + 1;
	if (start > end)
		length = 0;
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
