/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:16:07 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/17 15:47:18 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_trim_char(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int	ft_get_s_index(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (s1 == NULL)
		return (0);
	while (s1[i] != '\0' && ft_is_trim_char(set, s1[i]))
			i++;
	return (i);
}

static int	ft_get_e_index(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	if (s1 == NULL)
		return (0);
	while (i >= 0 && ft_is_trim_char(set, s1[i]))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	start = ft_get_s_index(s1, set);
	end = ft_get_e_index(s1, set);
	if (start == ft_strlen(s1))
		size = 0;
	else
		size = end - start + 1;
	str = ft_substr(s1, start, size);
	return (str);
}
