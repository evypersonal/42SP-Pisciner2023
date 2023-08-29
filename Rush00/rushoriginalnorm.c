/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushoriginalnorm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:25 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/20 15:48:30 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 || i == y - 1)
			{
				if (j == 0)
				{
					ft_putchar('A');
				}
				else if (j == x - 1)
				{
					ft_putchar('C');
				}
				else
				{
					ft_putchar('B');
				}
			}
			else
			{
				if (j == 0 || j == x - 1)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
