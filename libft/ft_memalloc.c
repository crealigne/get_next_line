/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:45:36 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/09 15:12:22 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	zone = malloc(size);
	if (zone)
	{
		ft_bzero(zone, size);
		return (zone);
	}
	else
		return (NULL);
}

/*
**int		main(void)
**{
**	size_t	i;
**	char	*str;
**
**	str = NULL;
**	i = 4;
**	str = ft_memalloc(i);
**	str[0] = 'P';
**	str[1] = 'r';
**	str[2] = 'r';
**	str[3] = '\0';
**	printf("res:%p\n", str);
**	printf("str=%s\n", str);
**	free(str);
**}
*/
