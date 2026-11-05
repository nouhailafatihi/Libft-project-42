/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:37:27 by username          #+#    #+#             */
/*   Updated: 2026/11/01 21:38:35 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	const unsigned char	*str;

	str = (const unsigned char *) s;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return ((char *) & str[i]);
		i--;
	}
	return (NULL);
}
