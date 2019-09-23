/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvaja <acarvaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:10:39 by cvinolo-          #+#    #+#             */
/*   Updated: 2019/09/15 21:42:28 by acarvaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		args_is_valid(char *pnt);
int		perform_table(char *args, int size);
void	print_error(int error);
int		ft_lenght(char *str);

int		main(int count, char *args[])
{
	int		i;
	char	*pnt;

	count = 0;
	pnt = malloc((ft_lenght(args[1]) / 2) * sizeof(char));
	i = 0;
	while (args[1][i] != '\0')
	{
		if (args[1][i] != ' ')
		{
			pnt[count] = args[1][i];
			count++;
		}
		i++;
	}
	if (args_is_valid(pnt) <= 0)
		print_error(args_is_valid(pnt));
	else
	{
		if (perform_table(pnt, 4) == 0)
			print_error(-4);
	}
	free(pnt);
	return (0);
}
