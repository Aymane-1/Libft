/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:21:02 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/16 21:12:05 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
static int ft_is_num_of_words(const char *str, char c)
{
	int i;
	int words;
	
	i = 0;
    words = 0;
    while(str[i])
	{
		if((str[i] != c && str[i + 1] == c) || (str[i] != c && str[i + 1] == '\0'))
			words++;
	i++;
	}
	return(words);
}

static char **ft_is_strings_printing(char **p_str, char *str, char c, int length)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while(i < length)
	{
		while(str[j] && str[j] == c)
			j++;
			k = 0;
			while(str[j] && str[j] != c)
			{
				p_str[i][k] = str[j];
				j++;
				k++;
			}
	p_str[i][k] = '\0';
	i++;
	}
	p_str[i] = 0;
	return(p_str);
}

char **ft_split(char const *s, char c)
{
	int i;
	int	j;
	int count;
	int len;
	char **s_ptr;

	i = 0;
	len = ft_is_num_of_words(s, c);
	s_ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!s_ptr)
		return (s_ptr);
	j = 0;
	while(i < len)
	{
		count = j;
		while(s[j] && s[j] == c)
			j++;
			while(s[j] && s[j] != c)
			j++;
			s_ptr[i] = (char *)malloc(count + 1 * sizeof(char *));
	i++;
	}
	return(ft_is_strings_printing(s_ptr, (char *)s, c, len));
}
