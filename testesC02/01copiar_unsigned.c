/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:47:59 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 11:36:17 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    
    while (*(src + i) != '\0' && (i < n))
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    return (dest);
}

int main()
{
    char destino[10], origem[10] = {"HelloWorld"};
    ft_strncpy(destino, origem, 7);
    printf("Destino: %s\n", destino);
    return(0);
}