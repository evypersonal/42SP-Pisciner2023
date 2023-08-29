/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:17:19 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/23 10:45:34 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main (void)
{
    int x;
    
    x = 5;
    int *a;
    int **b;
    int ***c;
    int ****d;
    int *****e;
    int ******f;
    int *******g;
    int ********h;
    int *********i;
    
    a = &x;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    i = &h;
    
    ft_ultimate_ft( i );
    printf("%d\n", x);
}