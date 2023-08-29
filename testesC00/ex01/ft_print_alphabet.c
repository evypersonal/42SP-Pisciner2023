/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:53:38 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/21 15:35:46 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char start;
    start = 'a';
    
    while(start <= 'z')
    {
        write(1, &start, 1);
        start++;
    }
}

int main()
{
    ft_print_alphabet();
    return (0);
}