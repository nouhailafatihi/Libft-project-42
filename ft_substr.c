/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:50:03 by username          #+#    #+#             */
/*   Updated: 2026/11/01 21:38:39 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	else if (len > size - start)
		len = size - start;
	r = malloc((len + 1));
	if (r == NULL)
		return (NULL);
	while (i < len)
		r[i++] = s[start++];
	r[i] = '\0';
	return (r);
}
