/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:43:34 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/16 21:08:38 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void f(unsigned i, char *s)
{
	i = 0;
	while(s[i])
	{
		s[i] = '1';
		i++;
	}
}

void ft_striteri(char *s, void (*f)(unsigned int i, char *str))
{
	int i;
	char *str;

	i = 0;
	while(s[i])
	{
		f(i, s);
		i++;
	}
}

int main()
{
	char s [] = "Meeeh";
	ft_striteri(s, f);
	printf("%s", s);
}
