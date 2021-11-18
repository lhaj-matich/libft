/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:43:37 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/13 13:44:03 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cpdst;
	char	*cpsrc;

	i = 0;
	cpdst = (char *)dst;
	cpsrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		cpdst[i] = cpsrc[i];
		i++;
	}
	return (dst);
}
