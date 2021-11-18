/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:26:38 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/18 14:43:44 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_length(int n)
{
	int	length;

	length = 0;
	if (n > 0)
		length = 0;
	else
		length = 1;
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char	*ft_assign_number(char *str, int n)
{
	long	number;
	int		rem;
	int		len;
	int		i;

	i = 0;
	number = n;
	len = ft_get_length(n);
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
	}
	while (number)
	{
		rem = number % 10;
		str[--len] = rem + '0';
		number = number / 10;
	}
	str[ft_get_length(n)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == 0)
		return (ft_strdup("0\0"));
	length = ft_get_length(n);
	str = (char *)malloc((sizeof(char) * (length + 1)));
	if (!str)
		return (NULL);
	else
		str = ft_assign_number(str, n);
	return (str);
}
