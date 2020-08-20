/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:53:44 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/16 15:49:22 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*out_first_blanks(char *trim)
{
	int			i;
	char		*trim_copy;

	i = 0;
	while (trim[i] == ' ' || trim[i] == '\n' || trim[i] == '\t')
		i++;
	trim_copy = &trim[i];
	return (trim_copy);
}

static size_t		dimension(char *trim)
{
	size_t		size;

	size = ft_strlen(trim);
	if (size == 0)
		return (size);
	while (trim[size] == ' ' || trim[size] == '\t'
			|| trim[size] == '\n' || trim[size] == '\0')
	{
		size--;
	}
	return (size + 1);
}

char				*ft_strtrim(char const *s)
{
	char		*trim;
	char		*res;
	size_t		size;

	if (!s)
		return (NULL);
	trim = (char *)s;
	size = 0;
	if (*trim != '\0')
	{
		trim = out_first_blanks(trim);
		size = dimension(trim);
	}
	res = (char*)malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	res = ft_strncpy(res, trim, size);
	res[size] = '\0';
	return (res);
}

/*
**int				main(void)
**{
**	printf("ft_strtrim1 :%s\n", ft_strtrim(" \n   \n\t\n abbassi       "));
**	printf("ft_strtrim2 :%s\n", ft_strtrim("    \n\tt       et\n\n\ne       "));
**	printf("ft_strtrim3 :%s\n", ft_strtrim("\tt et\ne "));
**	printf("ft_strtrim4 :%s\n", ft_strtrim("debut\t\tfin \t"));
**	printf("ft_strtrim5 :%s\n", ft_strtrim("\t\n   \tdebut\t\tfin"));
**	printf("ft_strtrim6 :%s\n", ft_strtrim(""));
**}
*/
