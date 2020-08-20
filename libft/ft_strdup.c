/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:04:18 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/10 17:58:20 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (j < i)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
