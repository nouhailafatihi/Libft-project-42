/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 09:19:33 by username          #+#    #+#             */
/*   Updated: 2026/11/04 19:47:37 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numb(int n)
{
	int		size;
	long	m;

	m = n;
	size = 0;
	if (m < 0)
	{
		size++;
		m = -m;
	}
	while (m >= 10)
	{
		size++;
		m = m / 10;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		size;
	int		i;
	long	m;

	i = 0;
	m = n;
	size = numb(n);
	r = malloc((size + 1));
	if (r == NULL)
		return (NULL);
	if (m < 0)
	{
		m = -m;
		r[i++] = '-';
	}
	r[size--] = '\0';
	while (size >= i)
	{
		r[size--] = m % 10 + '0';
		m = m / 10;
	}
	return (r);
}
