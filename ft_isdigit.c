/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:00:36 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/01 12:36:14 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if( c >= '0' && c <= '9' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}

int main()
{
	char x = 'c';
	printf("%d", ft_isdigit(x));
	printf("%d", isdigit(x));
}
