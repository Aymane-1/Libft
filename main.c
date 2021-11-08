/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:19:06 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/07 14:40:34 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char dest [11] = "Wsup";
	char src [] = "bitches";
	printf("The re-coded one : %zu\n", ft_strlcat(dest, src, 11));
	printf("Dest : %s\n", dest);
	printf("---------------\n");
	char dest1 [11] = "Wsup";
	char src1 [] = "bitches";
	printf("The original one : %zu\n", strlcat(dest1, src1, 11));
	printf("Dest : %s", dest1);
}

