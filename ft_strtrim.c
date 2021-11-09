/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:33 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/09 21:08:47 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <libc.h> 
int ft_strlen(const char *str)
{
	int count;
	count = 0;

	while(str[count])
	{
		count++;
	}
	return count;
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t len;
	int *start;
	int *end;
	char *ptr;

	start = ft_strlen((char *)s1 - 1);
	end = ft_strlen((char *)s1 + 1);
	ptr = (char *)malloc(sizeof(len + 1));
	if(!ptr)
		return(ptr);
	while(s1[i] && set[j]) 
	{
		if(ptr[i] != start[i])
		ptr[i] = 0;
		i++;
	}
	while(s1[i] && set[j])
	{
		if(ptr[i] != set[j])
		ptr[i] = 0;
		j--;
	}
	ptr[i - j] = '\0';
	return(ptr);
}

int main()
{
	char str [] = "..//#.hello#..#./";
	char set [] = "./#";
	printf("%s\n", ft_strtrim(str, set));
}
