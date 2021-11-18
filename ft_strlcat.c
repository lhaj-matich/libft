/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:56:44 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/14 12:40:41 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] && dstsize - dstlen - 1 > 0)
	{
			dst[dstlen + i] = src[i];
			dstsize--;
			i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
