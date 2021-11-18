/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:39:31 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/14 12:23:54 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cps;
	size_t	i;

	cps = (char *)s;
	i = 0;
	while (i < n)
	{
		if (cps[i] == (char)c)
			return (cps + i);
		i++;
	}
	return (NULL);
}
