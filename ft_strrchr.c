/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:46:02 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/14 09:46:43 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(s);
	if (str != NULL)
	{
		while (str[i] != (char)c)
		{
			if (i == 0 && (char)c != '\0')
				return (NULL);
			i--;
		}
	}
	return (str + i);
}
