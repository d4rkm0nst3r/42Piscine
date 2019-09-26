/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:17:04 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/26 17:19:05 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		while (nb % i != 0)
			i++;
		if (i == nb)
			return (nb);
		else
		{
			nb++;
			i = 2;
		}
	}
	return (0);
}
