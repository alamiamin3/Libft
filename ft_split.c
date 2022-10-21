/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:52:06 by aalami            #+#    #+#             */
/*   Updated: 2022/10/21 13:06:26 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_elm(char const *s, char c)
{
	size_t	i;
	int		elm;

	elm = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0)
		{
          if (s[i] != c)
                elm++;
          else if (s[i +1] != c)
            elm++;
		}
		else if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			elm++;
		}
		i++;
	}
	return (elm);
}

static char	**free_space(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (s);
}

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			words++;
		}
		else
			break ;
		s++;
	}
	return (words);
}

static char	*allocate(char const *s, int words)
{
	char	*new;
	int		size;

	size = words;
	new = (char *)malloc(words + 1);
	if (!new)
		return (0);
	while (words--)
		*new ++ = *s++;
	*new = '\0';
	return (new - size);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		elm;
	char	**ptr;

	if (!s)
		return (NULL);
	elm = count_elm(s, c);
	i = 0;
	ptr = (char **)malloc(sizeof(char *) * (elm + 1));
	if (!ptr)
		return (NULL);
	while (elm && *s)
	{
		if (*s != c)
		{
			ptr[i] = allocate(s, count_words(s, c));
			if (!ptr[i])
				return (free_space(ptr, i));
			s = s + count_words(s, c);
			elm--;
			i++;
		}
		s++;
	}
	ptr[i] = NULL;
	return (ptr);
}
