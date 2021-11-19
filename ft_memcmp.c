/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:29:19 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/05 12:59:23 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void * str1, const void * str2, size_t size)
{ 
	size_t i;
	i = 0;
	while(*((unsigned char*)str1+i) == *((unsigned char *)str2+i) && i < size)
		i++;
	return(*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
}
