/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:18:30 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/23 14:35:00 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_a;
    int temp_b;
    
    temp_a = *a / *b;
    temp_b = *a % *b;
    
    *a = temp_a;
    *b = temp_b;
    
}

int main (void)
{
    int x;
    int y;

    x = 5;
    y = 2;
    
    ft_ultimate_div_mod(&x, &y);
    printf("*a = %d, *b = %d\n", x, y);
}