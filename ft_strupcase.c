/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:05:17 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 17:53:07 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	resul;

	resul = 0;
	while (str [resul] != '\0')
	{
		if (str[resul] >= 'a' && str[resul] <= 'z')
		{
			str[resul] = str[resul] - 32;
		}
		resul++;
	}
	return (str);
}
