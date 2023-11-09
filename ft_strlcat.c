/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:09:44 by nbelouar          #+#    #+#             */
/*   Updated: 2023/11/08 02:05:25 by nbelouar42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	len_dest = i;
	len_src = ft_strlen(src);
	if (size <= len_dest || size == 0)
		return (len_src + size);
	size -= len_dest;
	while ((src[j] != '\0') && ((size_t)j < size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
