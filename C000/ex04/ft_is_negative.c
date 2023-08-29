/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:56:22 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/21 17:17:25 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	negorpos;

	negorpos = 0;
	while (negorpos == 0)
	{
		if (n >= 0)
		{
			write (1, "P", 1);
		}
		else
		{
			write (1, "N", 1);
		}
		negorpos++;
	}
}
