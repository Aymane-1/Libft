/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 02:28:09 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/18 02:35:19 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include<unistd.h>
void ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}
int main()
{
	int fd;

	fd = open("fuck", O_WRONLY | O_CREAT);
	ft_putnbr_fd('4', fd);
}
