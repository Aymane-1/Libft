/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:19:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/08 20:44:28 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <libc.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *ptr;

	i = 0;

	ptr = (char*)malloc(len + 1);
	if (!ptr)
		return(ptr);
	while(s[i] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return(ptr);
}

int main ()
{
	char str [] = "Hello world";
	printf("%s", ft_substr(str, 5, 4));
}
