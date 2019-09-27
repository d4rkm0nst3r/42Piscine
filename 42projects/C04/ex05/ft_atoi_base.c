/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:23:19 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/27 07:54:44 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_previous_str(int c, char type)
{
	if (type == ' ')
	{
		if (c == ' ' || c == '\f' || c == '\n' || c == '\r' ||
		c == '\t' || c == '\v')
			return (1);
		else
			return (0);
	}
	else if (type == '+')
	{
		if (c == '+' || c == '-')
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int			is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int			is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int			calculate_it(int pos, char *str, char *base, int lbase)
{
	long	n;
	int		ib;
	int		sign;

	n = 0;
	sign = 1;
	if (pos < 0)
	{
		pos *= (-1);
		sign *= (-1);
	}
	while (str[pos] != '\0' && (ib = is_in_base(str[pos], base)) >= 0)
	{
		n = n * lbase + ib;
		pos++;
	}
	n *= sign;
	if (n > 2147483647 || n < -2147483648)
		return (0);
	else
		return ((int)n);
}

int			ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		lbase;

	i = 0;
	sign = 1;
	if ((lbase = is_valid_base(base)) > 0)
	{
		while (str[i] != '\0' && (ft_previous_str((int)str[i], ' ')))
			i++;
		if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		{
			while (str[i] != '\0' && (ft_previous_str((int)str[i], '+')))
				if (str[i++] == '-')
					sign *= (-1);
		}
		if (str[i] != '\0' && (is_in_base(str[i], base) >= 0))
			return (calculate_it(i * sign, str, base, lbase));
	}
	return (0);
}
