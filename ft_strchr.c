/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:05:35 by username          #+#    #+#             */
/*   Updated: 2026/11/01 21:38:09 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int					i;
	const unsigned char	*str;

	str = (const unsigned char *) s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char) c)
			return ((char *) & str[i]);
		i++;
	}
	if (str[i] == (unsigned char) c)
		return ((char *) & str[i]);
	return (NULL);
}
