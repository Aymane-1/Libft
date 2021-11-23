/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:45:00 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/23 21:44:32 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
	int i;

	i = ft_strlen(str); 
	while(i >= 0)
	{	
		if(str[i] == (unsigned char)ch)
		return ((char* )(str + i));
		i--;
	}
	return(0);
}
