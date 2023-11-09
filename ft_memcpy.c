/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:52:21 by nbelouar          #+#    #+#             */
/*   Updated: 2023/11/09 16:13:25 by nbelouar42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tp_dst;
	unsigned char	*tp_src;

	tp_dst = (unsigned char *) dest;
	tp_src = (unsigned char *) src;
	if (!tp_dst && !tp_src)
		return (NULL);
	while (n > 0)
	{
		*(tp_dst++) = *(tp_src++);
		n--;
	}
	return (dest);
}
