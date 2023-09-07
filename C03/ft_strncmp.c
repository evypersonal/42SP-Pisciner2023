/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:23:16 by emaria-d          #+#    #+#             */
/*   Updated: 2023/09/01 15:39:54 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			dif;

	i = 0;
	dif = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		dif = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			return (dif);
		}
		i++;
	}
	return (dif);
}

 int main()
{
    char *s1;
    char *s2;
    s1 = "abcd";
    s2 = "ab";
    int resul;
    resul = ft_strncmp(s1, s2, 2);
    printf("Comparação de s1 e s2: %d", resul);
    return(0);
}
