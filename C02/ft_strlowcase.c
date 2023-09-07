/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:37:12 by emaria-d          #+#    #+#             */
/*   Updated: 2023/08/28 17:57:04 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	resul;

	resul = 0;
	while (str [resul] != '\0')
	{
		if (str[resul] >= 'A' && str[resul] <= 'Z')
		{
			str[resul] = str[resul] + 32;
		}
		resul++;
	}
	return (str);
}
