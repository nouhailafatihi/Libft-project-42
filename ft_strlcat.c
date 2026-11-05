/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:23:07 by nfatihi           #+#    #+#             */
/*   Updated: 2026/11/01 21:38:17 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lendst = 0;
	while (lendst < size && dst[lendst] != '\0')
		lendst++;
	lensrc = ft_strlen(src);
	if (size <= lendst)
		return (size + lensrc);
	j = 0;
	i = lendst;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (lendst + lensrc);
}
