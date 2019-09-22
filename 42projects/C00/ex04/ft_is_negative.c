/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:21:12 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/15 14:35:22 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char resultado;

	if (n < 0)
		resultado = 'N';
	else
		resultado = 'P';
	write(1, &resultado, 1);
}
