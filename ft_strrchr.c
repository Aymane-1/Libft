/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:45:00 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/03 11:37:54 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *str, int ch)
{
	int i;
	int count;
	i = 0;
	count = 0; 
	
	while(str[count])
	{
		count++;
	}
	i = count;

	while(str[--i])
	{	
		if(str[i] == ch)
		return ((char* ) str + i);
	}
	return(0);
}
