/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:10:14 by emaria-d          #+#    #+#             */
/*   Updated: 2023/09/01 15:04:40 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;
	int	control;

	i = 0;
	s = 0;
	while (str[i] != '\0')
	{
		control = i;
		while (str[control] == to_find[s] && to_find[s] != '\0')
		{
			control++;
			s++;
		}
		if (to_find[s] == '\0')
		{
			return (&str[i]);
		}
		i++;
		s = 0;
	}
	return (0);
}

// int main()
//{
//    char str[25] = "EvellynMariaOliveira";
//    char find[] = "Maria";
//    char *result = ft_strstr(str, find);
//    printf ("%s", result);
//}
