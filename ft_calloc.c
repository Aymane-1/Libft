/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:57:38 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 11:32:02 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(n * size);
	if (!p)
		return (p);
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
