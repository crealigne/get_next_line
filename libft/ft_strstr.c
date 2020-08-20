/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:48:30 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/10 14:45:29 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& haystack[i + j] != '\0'
			&& needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char*)(&haystack[i]));
		i++;
	}
	return ((char*)0);
}

/*
**int		main(void)
**{
**	const char meule_de_foin[] = "fais toi plaisir";
**	const char aiguille[] = "toi";
**
**	printf("%s\n", ft_strstr(meule_de_foin, aiguille));
**}
*/
