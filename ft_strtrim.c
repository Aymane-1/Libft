/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:33 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/10 21:20:33 by aechafii         ###   ########.fr       */
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

int ft_is_within_s1(const char *str, char ch)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		if(str[i] == ch)
			return(1);
		i++;
	}
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	int length;
	int start;
	int end;
	char *ptr;

	i = 0;
	start = i;
	while(s1[start] && ft_is_within_s1(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while(s1[end] && ft_is_within_s1(set, s1[end]) == 1)
		end --;
	length = (end - start) + 1;
	if (start > end)
		length = 1;
	ptr = (char *)malloc(length * sizeof(char));
	if(!ptr)
		return(ptr);
	while(start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return(ptr);
}

int main()
{
	const char s1 [] = "jdhfd";
	const char set [] = "./#";
	printf("%s\n", ft_strtrim(s1, set));
}
