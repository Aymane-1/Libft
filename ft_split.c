/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:21:02 by aechafii          #+#    #+#             */
/*   Updated: 2021/11/11 23:39:36 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
int ft_strlen(const char *str)
{
    int count;

    count = 0;
    while(str[count])
    {
        count++;
    }
    return count;
}

int ft_is_delimiter(const char *str, char c)
{
	size_t i;
	
	i = 0;
   while(str[i])
   {
		if(str[i] == c)
			return (1);
		i++;
   }
   return (0);
}

int ft_is_num_of_words(const char *str, char c)
{
	int i;
	int start;
	int end;
    int len;
	
	i = 0;
    start = i;
	end = ft_strlen(str) - 1;
    while(str[start] && ft_is_delimiter(&str[start], c) == 0)
        start++;
	printf("%d\n", start);
	len = end - start + 1;
	return(len);

}

/*char **ft_split(char const *s, char c)
{
}
*/

int main()
{
	const char s [] = "Hello world";
	char c = ' ';

	printf("%d", ft_is_num_of_words(s, c));
}
