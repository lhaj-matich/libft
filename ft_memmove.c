/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:45:11 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/18 17:10:33 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cpsrc;
	char	*cpdest;
	size_t	i;

	i = 0;
	cpsrc = (char *)src;
	cpdest = (char *)dst;
	if ((cpsrc == NULL) && (cpdest == NULL))
		return (NULL);
	if ((cpsrc < cpdest) && (cpdest < cpsrc + len))
	{
		while (len--)
		{
			cpdest[len] = cpsrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			cpdest[i] = cpsrc[i];
			i++;
		}
	}
	return (dst);
}
