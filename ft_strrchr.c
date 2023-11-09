/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:44:18 by nbelouar          #+#    #+#             */
/*   Updated: 2023/11/08 14:05:59 by nbelouar42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	cc;

	cc = (char) c;
	res = NULL;
	i = ft_strlen(s);
	if (cc == '\0')
	{
		res = (char *) &s[i];
		return (res);
	}
	if (s[i] != '\0')
		return (NULL);
	while (i-- != 0)
	{
		if (s[i] == cc)
		{
			res = (char *) &s[i];
			return (res);
		}
	}
	return (NULL);
}
