/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:15:30 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/24 12:05:48 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nb_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	int		len;
	long	nb;
	char	*p;

	size = 0;
	if (n < 0)
		size = 1;
	len = nb_digits(n);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (p);
	nb = n;
	if (nb < 0)
		p[0] = '-';
	if (nb < 0)
		nb *= -1;
	p[len] = '\0';
	while (--len >= size)
	{
		p[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (p);
}
