/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvaja <acarvaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:30:03 by cvinolo-          #+#    #+#             */
/*   Updated: 2019/09/15 21:48:25 by acarvaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		**fill_array(int **arr, int size);
void	ft_putchar(char x);
int		calc_bfs(int x, int *row);
int		calc_bseen(int x, int *row);

int		fill_next(int cell)
{
	if (cell == 0)
		cell = 1;
	else
		cell++;
	return (cell);
}

int		check_rules2(int *row, char arg, int y)
{
	int argnbr;
	int buildfs;
	int buildseen;

	argnbr = (int)arg - '0';
	buildfs = calc_bfs(y, row);
	buildseen = calc_bseen(y, row);
	if ((buildfs + buildseen) == argnbr)
		return (1);
	return (0);
}

int		check_rules(int **table, int x, int y, char *args)
{
	int i;
	int result;

	result = 1;
	i = -1;
	while (i++ < 3)
	{
		if (i != y)
			if (table[x][y] == table[x][i])
				return (0);
	}
	i = -1;
	while (i++ < 3)
	{
		if (i != x)
			if (table[x][y] == table[i][y])
				return (0);
	}
	result = check_rules2(table[x], args[x + 8], y);
	return (result);
}

void	draw_table(int **table, int size)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (i++ < size - 1)
	{
		while (j++ < size - 1)
		{
			ft_putchar(table[i][j] + '0');
			if (j < size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j = -1;
	}
}

int		perform_table(char *args, int size)
{
	int	x;
	int	y;
	int	**table;

	table = 0;
	table = fill_array(table, size);
	x = 0;
	y = 0;
	while (x < size)
	{
		while (y < size)
		{
			if (y < 0 && x > 0)
				return (0);
			table[x][y] = fill_next(table[x][y]);
			while (check_rules(table, x, y, args) == 0 && table[x][y] < 4)
				table[x][y] = fill_next(table[x][y]);
			check_rules(table, x, y, args) == 0 ? table[x][y--] = 0 : y++;
		}
		y = 0;
		x++;
	}
	draw_table(table, size);
	return (1);
}
