/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:40:43 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 15:26:04 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    while(*str != '\0')
        {
        if((*str >= 97 && *str <= 122) || (*str  >= 65 && *str <= 90))
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
    resul[0] = ft_str_is_alpha ("ehjhbFDKFDG");
    printf("%d", resul[0]);
    return 0;
}