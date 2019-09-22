/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:30:29 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/19 20:37:20 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] = str[c] + 32;
		c++;
	}
	c = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[c] = str[c] - 32;
	while (str[c] != '\0')
	{
		if (str[c - 1] < 'a' || str[c - 1] > 'z')
			if (str[c - 1] < 0 || str[c - 1] > '9')
				if (str[c - 1] < 'A' || str[c - 1] > 'Z')
					if (str[c] >= 'a' && str[c] <= 'z')
						str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
