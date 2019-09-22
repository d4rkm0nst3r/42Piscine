/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmachota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 13:28:08 by dmachota          #+#    #+#             */
/*   Updated: 2019/09/22 13:30:34 by dmachota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
