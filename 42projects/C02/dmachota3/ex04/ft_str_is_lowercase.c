/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:30:16 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/19 20:12:40 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int lower;

	lower = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			lower = 1;
		}
		else
		{
			lower = 0;
			return (lower);
		}
		str++;
	}
	return (lower);
}
