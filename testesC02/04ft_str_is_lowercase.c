/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:44:33 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 15:49:13 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 'a' && *str <= 'z') || (*str == ' '))
        {
            str++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int resul[1];
    resul[0] = ft_str_is_lowercase("AAAA");
    printf("%d", resul[0]);
    return 0;
}