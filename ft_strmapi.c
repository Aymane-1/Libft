/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:28:40 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/16 20:26:52 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
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

char f(unsigned i, char c)
{
	i = 49;
	c = i;
	return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
    int i;
	int len;
    char *str;

    i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(len + 1 * sizeof(char *));
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

int main()
{
	char s [] = "Hakuna Matata";
	printf("%s", ft_strmapi(s, f));
}
