/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:52:30 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 15:55:13 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 'A' && *str <= 'Z') || (*str == ' '))
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
    resul[0] = ft_str_is_uppercase("65465");
    printf("%d", resul[0]);
    return 0;
}