/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:54:44 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/20 10:12:56 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *str, int c, size_t len)
{
	size_t i;
	
	i = 0;
	while(i < len) 
	{
		((unsigned char *)str)[i] = (unsigned char )c;
		i++;
	}	
	return(str);
}
