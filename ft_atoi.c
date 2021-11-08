/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:50:40 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/07 13:59:58 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	s;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) == 1)
		i++;
	while(str[i] == '+' && str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}

int main()
{
	char str [] = "-+12345";
	printf("%d\n", ft_atoi(str));

	char str1 [] = "-+12345";
	printf("%d", atoi(str1));
}
