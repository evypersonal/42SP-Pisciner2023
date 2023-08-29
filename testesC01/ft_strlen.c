/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:11:49 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/24 16:55:26 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int count = 0;
    
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return(count);
}

int main(void)
{
    int countn;
    char *str;
    str = "helloWorld123";
    countn = ft_strlen(str);
    
    printf("%d", countn);
    return(0);
}