/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eligero <eligero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:22:45 by eligero           #+#    #+#             */
/*   Updated: 2019/09/23 04:32:11 by eligero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
		return (0);
	else
	{
		while (argv[0][i] != '\0')
		{
			write(1, argv[0] + i, 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
