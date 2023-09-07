/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:33:10 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 15:42:41 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 48 && *str <= 57) || (*str == ' '))
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
    resul[0] = ft_str_is_alpha ("sdsfd");
    printf("%d", resul[0]);
    return 0;
}