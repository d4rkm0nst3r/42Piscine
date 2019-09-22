/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:16:52 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/15 15:48:47 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = '1';
	u = '2';
	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				u = d;
				while (u++ < '9')
				{
					ft_putchar(c, d, u);
					(c != '7' || d != '8' || u != '9') && write(1, ", ", 2);
				}
			}
		}
	}
}
