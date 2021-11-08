/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:57:38 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/08 15:34:45 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
void *ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(n * size);
	if(!p)
		return(p);
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return(p);
}
int main()
{
	printf("%s\n", ft_calloc(10, 1));
   //printf("%s\n", calloc(10, 1));
 }
