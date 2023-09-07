/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:29:47 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/29 17:07:37 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
int main ()
{
    char *s1 = "abc";
    char *s2 = "abcd";
    int resul;
    resul = ft_strcmp(s1,s2);
    printf("%d", resul);
    return(0);
}
