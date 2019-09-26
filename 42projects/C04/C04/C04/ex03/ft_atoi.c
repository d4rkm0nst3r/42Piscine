/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:56:33 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/25 20:57:03 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		signo;
	int		x;

	signo = 1;
	i = 0;
	x = 0;
	while ((str[i] <= 12 && str[i] >= 9) || (str[i] == 32))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signo = signo * (-1);
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		x = x * 10 + (str[i] - 48);
		i++;
	}
	x = x * signo;
	return (x);
}
