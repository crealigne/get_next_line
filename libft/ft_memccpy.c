/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:59:15 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/10 14:19:59 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	i = 0;
	sdst = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		if (ssrc[i] == (unsigned char)c)
			return ((void *)&sdst[i + 1]);
		i++;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char	ssrc[50];
**	char	sdst[10];
**	char	ft_ssrc[50];
**	char	ft_sdst[100];
**
**	ft_memcpy(ssrc, "agvmCddk", 8);
**	ft_memcpy(sdst, "aaaaaaaaaa", 10);
**	ft_memcpy(ft_ssrc, "agvmCddk", 8);
**	ft_memcpy(ft_sdst, "aaaaaaaaaa", 10);
**	printf("ft_memccpy : %s\nmemccpy : %s\n",
**			(char *)memccpy(sdst, ssrc, 'm', 2),
**			(char *)ft_memccpy(ft_sdst, ft_ssrc, 'm', 2));
**
**	printf("sdst : %s\nssrc : %s\n", ft_sdst, ft_ssrc);
**	printf("sdst : %s\nssrc : %s\n", sdst, ssrc);
**	return (0);
**}
*/
