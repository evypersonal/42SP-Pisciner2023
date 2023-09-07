/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:59:43 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/30 11:58:23 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    i = 0;
    int s;
    s = 0;
    while(dest[i]!= '\0')
    {
        i++;
    }
    while(src[s] != '\0')
    {
        dest [i + s] = src [s];
        s++;
    }
    dest [i + s] = '\0';
    return (dest);
}

int main (void)
{
    char dest[100] = "Hello";
    char src[] = "World";
    ft_strcat(dest, src);
    printf("%s", dest);
    return (0);
}