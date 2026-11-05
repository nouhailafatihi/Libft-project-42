/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfatihi <nfatihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 20:40:01 by username          #+#    #+#             */
/*   Updated: 2026/11/01 21:38:07 by nfatihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			size++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (size);
}

static char	**ft_free(char **words, int n)
{
	while (n >= 0)
	{
		free(words[n]);
		n--;
	}
	free(words);
	return (NULL);
}

static char	*fillword(char const *s, int start, int end)
{
	char	*string;
	int		j;

	string = malloc((end - start + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	j = 0;
	while (start < end)
	{
		string[j] = s[start];
		start++;
		j++;
	}
	string[j] = '\0';
	return (string);
}

static char	**fillwords(char const *s, char c, char **words, int size)
{
	int	n;
	int	i;
	int	start;

	i = 0;
	n = 0;
	while (n < size)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		words[n] = fillword(s, start, i);
		if (words[n] == NULL)
			return (ft_free(words, n - 1));
		n++;
	}
	words[n] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		size;

	if (s == NULL)
		return (NULL);
	size = countword(s, c);
	words = malloc((size + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	return (fillwords(s, c, words, size));
}
