/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 22:10:32 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/15 22:19:53 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	c;
	int	d;

	c = 0;
	while (c < size - 1)
	{
		d = 0;
		while (d < size - c - 1)
		{
			if (tab[d] > tab[d + 1])
			{
				aux = tab[d];
				tab[d] = tab[d + 1];
				tab[d + 1] = aux;
			}
			d++;
		}
		c++;
	}
}
