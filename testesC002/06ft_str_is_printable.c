/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:58:55 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 16:03:14 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 32 && *str <= 126) || (*str == ' '))
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
    resul[0] = ft_str_is_uppercase("24");
    printf("%d", resul[0]);
    return 0;
}