/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:03:57 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/24 14:05:37 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char learn[1];

	while(*str != '\0')
	{
		learn[0] = *str; 
		write(1, learn, 1);
		str++;
	}
}

int main()
{
	ft_putstr("Hello");
}