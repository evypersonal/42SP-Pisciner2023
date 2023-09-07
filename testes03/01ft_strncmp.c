/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:23:16 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/30 10:50:23 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i = 0;
    while(i < n && s1[i]!= '\0')
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

int main()
{
    char *s1;
    char *s2;
    s1 = "abcdef";
    s2 = "ab";
    int resul;
    resul = ft_strncmp(s1, s2, 3);
    printf("Comparação de s1 e s2: %d", resul);
    return(0);
}