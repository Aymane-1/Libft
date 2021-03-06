/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:47:41 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 11:12:21 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*temp;
	size_t			len;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	temp = s;
	len = n;
	if (d == s)
		return (d);
	else
	{
		while (d != s && len > 0)
		{
			s++;
			len --;
		}
		if (d == s)
			while (n-- > 0)
				d[n] = temp[n];
		else
			ft_memcpy(d, temp, n);
	}
	return (d);
}
