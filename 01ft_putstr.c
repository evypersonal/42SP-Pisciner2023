/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:43:03 by emaria-d          #+#    #+#             */
/*   Updated: 2023/09/04 12:02:21 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
        char i [0];
        while(*str != '\0')
        {
            i[0] = *str;
            write(1, i, 1);
            str++;
        }
}

int main()
{
    ft_putstr("HelloWorld");
}