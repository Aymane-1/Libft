/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:38:24 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/03 13:30:20 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned i;
	i = 0;

	if (n == 0)
		return (0);
	while ( str1[i] && str1[i] == str2[i] && i < n )
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
