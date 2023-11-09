/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:09 by nbelouar42        #+#    #+#             */
/*   Updated: 2023/11/08 02:52:03 by nbelouar42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_div(int n)
{
	size_t	i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*strnb;
	size_t		nlen;
	int			sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	nlen = ft_div(n) + sign;
	strnb = malloc((nlen + 1) * sizeof(char));
	if (!strnb)
		return (0);
	strnb[nlen] = '\0';
	while (nlen-- > 0)
	{
		strnb[nlen] = n % 10 + '0';
		n /= 10;
	}
	if (sign == 1)
		strnb[0] = '-';
	return (strnb);
}
