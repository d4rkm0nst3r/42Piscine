/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:28:11 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/18 13:58:20 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int printable;

	printable = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			printable = 1;
		else
		{
			printable = 0;
			return (printable);
		}
		str++;
	}
	return (printable);
}
