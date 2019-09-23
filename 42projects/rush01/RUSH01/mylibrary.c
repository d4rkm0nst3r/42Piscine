/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylibrary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvaja <acarvaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:14:26 by acarvaja          #+#    #+#             */
/*   Updated: 2019/09/15 21:22:34 by acarvaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int		ft_lenght(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		calc_bfs(int y, int *row)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i <= y)
	{
		if (row[i] > result)
			result = row[i];
		i++;
	}
	result = 4 - result;
	return (result);
}

int		calc_bseen(int y, int *row)
{
	int i;
	int j;
	int build_seen;

	i = 1;
	j = 0;
	build_seen = 1;
	while (i <= y)
	{
		if (row[j] < row[i])
		{
			build_seen++;
			j = i;
		}
		i++;
	}
	return (build_seen);
}

int		**fill_array(int **arr, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(int *) * size);
	arr[0] = malloc(sizeof(int) * size);
	arr[1] = malloc(sizeof(int) * size);
	arr[2] = malloc(sizeof(int) * size);
	arr[3] = malloc(sizeof(int) * size);
	while (i < size)
	{
		while (j < size)
		{
			arr[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}
