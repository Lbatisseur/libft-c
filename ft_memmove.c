/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:18:46 by nbelouar          #+#    #+#             */
/*   Updated: 2023/11/08 17:02:30 by nbelouar42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*f;
	char	*t;

	f = (char *)src;
	t = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (len--)
			t[len] = f[len];
	else
		while (len--)
			*t++ = *f++;
	return (dst);
}
