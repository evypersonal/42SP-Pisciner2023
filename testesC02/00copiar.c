/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:25:53 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/25 15:22:23 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    char i = 0;

    while(*(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    return (dest);
}

int main ()
{
    char destino[25], origem[25] = {"HelloWorld!"};
    ft_strcpy(destino, origem);
    printf ("Destino : %s\n ", destino);
    return(0);
}