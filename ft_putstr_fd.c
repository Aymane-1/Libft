/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:27:22 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/18 00:32:25 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<fcntl.h>
void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
int main()
{
	int fd;

	fd = open("test", O_CREAT | O_RDWR);
	ft_putstr_fd("Hello world", fd);
}
