/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:52:06 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/10 14:18:08 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dest);
}
