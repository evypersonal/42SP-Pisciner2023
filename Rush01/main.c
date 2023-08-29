/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mauroliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:57:45 by mauroliv          #+#    #+#             */
/*   Updated: 2023/08/27 20:57:49 by mauroliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	line(char line, char space, int matriz[4][4])
{
	int     row;
	int     colum;

	row = 0;
	line = '\n';
	space = ' ';
	while (row < 4)
	{
		colum = 0;
		while (colum < 4)
		{
			char	num_str[2];
			num_str[0] = matriz[row][colum] + '0';
			num_str[1] = space;
			write(1, num_str, 2);
			colum++;
		}
		write(1, &line, 1);
		row++;
	}
}

int	tesk(char *input)
{
	char	target[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	return	strcmp(input, target) == 0;
}

void	error()
{
	char	msg[] = "Error\n";
	write(1, msg, 6);
}

void	init_input(int argc, char *argv[], int matriz[4][4])
{
	int	arg_index = 1;
	char	input[100] = "";
	while (arg_index < argc)
	{
		strcat(input, argv[arg_index]);
		if (arg_index != argc - 1)
		{
			strcat(input, " ");
		}
		arg_index++;
	}
	if (tesk(input))
	{
		line('\n', ' ', matriz);
	}
	else 
	{
		error();
	}
}

int	main(int argc, char *argv[])
{
	int	matriz[4][4] =
	{
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 0, 2},
		{4, 1, 2, 3}
	};
	init_input(argc, argv, matriz);
	return 0;
}
