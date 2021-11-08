/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:35:12 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/08 19:19:11 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strdup(const char *src)
{   
    size_t i;	
    char *ptr;

    i = 0;
    ptr = (char *)malloc(sizeof(src));
	if(!ptr)
		return(NULL);
	while(src[i])
	{
		ptr[i] = src[i];
		i++;
    }
	ptr[i]= '\0';
	return(ptr);
}
int main()
{
	char str [] = "Hi bitch";
	printf("%s\n", ft_strdup(str));
	printf("%s", strdup(str));
}

