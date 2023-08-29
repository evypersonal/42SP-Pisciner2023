/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:58:37 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/23 12:24:34 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main (void)
{
    int a;
    int b;
    int resul;
    int rest;
    
    a = 5;
    b = 2;
    resul = a / b;
    rest = a % b;
    
    ft_div_mod(a , b , &resul , &rest);
    printf("div = %d, mod = %d\n", resul , rest);
}