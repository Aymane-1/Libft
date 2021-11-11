/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:47:41 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/11 16:53:38 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <libc.h>
void *ft_memmove(void *dest, const void *src, size_t len)
{
	int i;
	int count;
	i = 0;
	count = 0;
	
	while(((char *)src)[count])
	{
		count++;
	}
	i = count;
	while(i >= 0)
	{
		(((char *)dest)[i]) = (((char *)src)[i]);
		i--;
	}
	return (dest);
}

int main()
{
	char str[15] = "hellojames";
	printf("%s\n", ft_memmove(str, "hello wordl", 6));
}
