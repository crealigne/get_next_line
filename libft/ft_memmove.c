/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:06:07 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/10 14:21:28 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if ((!dest && !src) || len < 0)
		return (NULL);
	if (a > b)
		while (i < len)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	return (dest);
}

/*
**int		main(void)
**{
**	unsigned char		dest[] = "123aaaaaaa";
**	unsigned char		src[] = "542zzzzzzzz";
**	printf("Avant memmove dest = %s, src = %s\n", dest, src);
**	ft_memmove(dst, src, 3);
**	printf("Apres memmove dest = %s, src = %s\n", dest, src);
**	return (0);
**}
*/
