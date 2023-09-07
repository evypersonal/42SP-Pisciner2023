/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:28:22 by emaria-d          #+#    #+#             */
/*   Updated: 2023/09/06 11:29:14 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_space(char esp)
{
	return (esp == 'f' || esp == '\n' || esp == '\r'
		|| esp == '\t' || esp == '\v' || esp == ' ');
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 0;
	result = 0;
	while (ft_is_space(str[i]))
	i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (signal % 2 != 0)
		result = -result;
	return (result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	int	num;

	num = ft_atoi(" -+-+--157ab567");
	ft_putnbr(num);
	return (0);
}