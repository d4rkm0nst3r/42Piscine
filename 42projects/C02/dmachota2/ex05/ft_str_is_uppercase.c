/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:43:35 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/19 20:23:23 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int upper;

	upper = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			upper = 1;
		}
		else
		{
			upper = 0;
			return (upper);
		}
		str++;
	}
	return (upper);
}
