/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:18:33 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/17 22:32:29 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<fcntl.h>
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main()
{
	int fd;

	fd = open("42", O_WRONLY | O_CREAT);
	ft_putchar_fd('Z', fd);
}
