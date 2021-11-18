/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:32:52 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/18 02:27:18 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include<unistd.h>
void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
int main()
{
	int fd;
	char s[] = "hello world";

	fd = open("test", O_CREAT | O_RDWR);
	ft_putendl_fd(s, fd);
}

