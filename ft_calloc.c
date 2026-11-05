/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 09:10:00 by username          #+#    #+#             */
/*   Updated: 2026/11/01 21:37:27 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	if (size != 0 && nmemb > (((size_t) - 1) / size))
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}
