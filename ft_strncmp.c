/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:33:23 by nfatihi           #+#    #+#             */
/*   Updated: 2026/11/01 21:38:24 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == i)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0' && i < (n -1))
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
