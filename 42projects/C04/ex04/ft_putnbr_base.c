/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:59:02 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/27 07:53:54 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			check_twice(char *base, int length)
{
	int i;
	int j;

	i = 0;
	j = length;
	while (j >= 0)
	{
		i = j - 1;
		while (i >= 0)
		{
			if (base[i] == base[j])
				return (1);
			i--;
		}
		j--;
	}
	return (0);
}

int			is_valid_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i == 0 || i == 1 ||
		check_twice(base, i))
		return (0);
	else
		return (i);
}

void		recur(int n, char *base, int l)
{
	if (n < 1 - l || n > l - 1)
		recur(n / l, base, l);
	if (n < 0)
	{
		if (n > -l)
			ft_putchar('-');
		ft_putchar(base[-(n % l)]);
	}
	else
		ft_putchar(base[n % l]);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int length;

	length = is_valid_base(base);
	if (length)
		recur(nbr, base, length);
}
