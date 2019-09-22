/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:16:30 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/17 16:26:15 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int numeric;

	numeric = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			numeric = 1;
		}
		else
		{
			numeric = 0;
			return (numeric);
		}
		str++;
	}
	return (numeric);
}
