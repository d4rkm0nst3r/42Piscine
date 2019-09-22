/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:15:04 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/15 21:41:38 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux[size];
	int	c;
	int	d;

	size--;
	d = size;
	c = 0;
	while (size >= 0)
	{
		aux[size] = tab[c];
		size--;
		c++;
	}
	c = 0;
	while (c <= d)
	{
		tab[c] = aux[c];
		c++;
	}
}
