/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:20:52 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/20 15:04:20 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		nb_words;
	int		i;

	nb_words = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			nb_words++;
		if (s[i] != c && (i > 0 && s[i - 1] == c))
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int	ft_freetab(char ***tab, int nb_words)
{
	while (nb_words > 0)
	{
		nb_words--;
		ft_strdel((char **)&(*tab)[nb_words]);
	}
	ft_memdel((void **)&(*tab));
	return (0);
}

static int	fill_tab(char **tab_words, char const *s, char c)
{
	int		i;
	int		index;
	int		start_word;
	int		size_word;

	i = -1;
	index = -1;
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			start_word = i;
			index++;
		}
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			size_word = i - start_word + 1;
			if (!(tab_words[index] = (char *)malloc((size_word + 1) \
									* sizeof(char))))
				return (ft_freetab(&tab_words, index));
			ft_memcpy(tab_words[index], s + start_word, size_word);
			tab_words[index][size_word] = '\0';
		}
	}
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	int		total_words;
	char	**tab;

	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	tab = (char **)malloc((total_words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[total_words] = NULL;
	if (!fill_tab(tab, s, c))
		tab = NULL;
	return (tab);
}

/*
** int			main(void)
** {
** 	char	*s1;
** 	char	**yo;
** 	int		i;
**
** 	s1 = "hbfhdsbf djhfdjhf jshsuehr";
** 	yo = ft_strsplit(s1, ' ');
** 	i = -1;
** 	while (yo && yo[++i])
** 	{
** 		printf("i=%d, yo[i]=%s\n", i, yo[i]);
** 		free(yo[i]);
** 		yo[i] = NULL;
** 	}
** 	free(yo);
** 	yo = NULL;
** 	return (0);
** }
*/
