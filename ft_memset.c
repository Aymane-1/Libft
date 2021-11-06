/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:54:44 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/03 17:43:02 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_memset(void *str, int c, size_t len)
{
	int i;
	i = 0;
	
	while(((char *)str)[i] && i < len) 
	{
		((char *)str)[i] = c;
		i++;
	}	
	return(((char *)str));

}
