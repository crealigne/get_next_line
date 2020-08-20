/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:39:49 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/04 16:54:22 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	char					*j;
	char					*k;

	if (!*s2)
		return ((char *)s1);
	while (n-- && *s2)
	{
		if (*s1 == *s2)
		{
			i = n;
			j = (char *)s1 + 1;
			k = (char *)s2 + 1;
			while (i-- && *j && *k && *j == *k)
			{
				++j;
				++k;
			}
			if (!*k)
				return ((char *)s1);
		}
		++s1;
	}
	return (NULL);
}
