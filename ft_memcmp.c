/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:40:09 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/13 14:03:54 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cps1;
	char	*cps2;
	size_t	i;

	i = 0;
	cps1 = (char *)s1;
	cps2 = (char *)s2;
	if (n == 0)
		return (0);
	while (cps1[i] == cps2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)cps1[i] - (unsigned char)cps2[i]);
}
