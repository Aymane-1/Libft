/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:25:06 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/19 19:09:40 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalnum(int c)
{
	if (( c >= 49 && c <= 57) || ( c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return(0);
}
