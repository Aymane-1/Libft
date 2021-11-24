/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:21:02 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 12:32:05 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_num_of_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c)
			|| (str[i] != c && str[i + 1] == '\0'))
			words++;
	i++;
	}
	return (words);
}

static char	**ft_is_printing(char **p_str, char *str, char c, int length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < length)
	{
		while (str[j] && str[j] == c)
			j++;
			k = 0;
		while (str[j] && str[j] != c)
		{
			p_str[i][k] = str[j];
			j++;
			k++;
		}
	p_str[i][k] = '\0';
	i++;
	}
	p_str[i] = 0;
	return (p_str);
}

static char	**ft_is_free(char **ptr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(ptr[i]);
		i++;
	}
	free (ptr);
	return (NULL);
}

typedef struct variables {
	int		i;
	int		j;
	int		count;
	int		len;
}	t_var;

char	**ft_split(char const *s, char c)
{
	t_var	v;
	char	**s_ptr;

	if (!s)
		return (NULL);
	v.i = 0;
	v.len = ft_is_num_of_words(s, c);
	s_ptr = (char **)malloc((v.len + 1) * sizeof(char *));
	if (!s_ptr)
		return (s_ptr);
	v.j = 0;
	while (v.i < v.len)
	{
	v.count = 0;
		while (s[v.j] && s[v.j] == c)
		v.j++;
		while (s[v.j] && s[v.j] != c)
		v.j++;
		s_ptr[v.i] = (char *)malloc((v.count + 1) * sizeof(char));
		if (!(s_ptr[v.i]))
			return (ft_is_free(s_ptr, v.count));
	v.i++;
	}
	return (ft_is_printing(s_ptr, (char *)s, c, v.len));
}
