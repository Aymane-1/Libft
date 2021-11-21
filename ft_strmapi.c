/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:28:40 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/21 17:33:34 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
    int i;
	int len;
    char *str;

    i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(len + 1 * sizeof(char));
	if(!str)
		return(NULL);
    while(s[i])
    {
		str[i] = f(i ,s[i]);
		i++;
    }
	str[i] = '\0';
	return (str);
}   


