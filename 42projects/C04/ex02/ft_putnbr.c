/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:36:41 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/26 18:35:12 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nbaux;

	if (nb < 0)
	{
		write(1, "-", 1);
		nbaux = -1 * nb;
	}
	else
	{
		nbaux = nb;
	}
	if (nbaux <= 10)
	{
		ft_putnbr(nbaux / 10);
	}
	nbaux = (nbaux % 10) + 48;
	write(1, &nbaux, 1);
}
