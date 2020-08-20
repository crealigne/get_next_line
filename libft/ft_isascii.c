/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:59:23 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/09 14:38:11 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
**int			main(void)
**{
**	int	result;
**	int	c;
**
**	c = 129;
**	c = '~';
**	result = ft_isascii(c);
**	printf("%d\n", ft_isascii(129));
**	printf("%d\n", ft_isascii('~'));
**	printf("%d\n", isascii(129));
**	printf("%d\n", isascii('~'));
**	printf("\n");
**	c = 15;
**	result = ft_isascii(c);
**	printf("%d\n", ft_isascii(15));
**	printf("%d\n", ft_isascii(15));
**	printf("%d\n", isascii(15));
**	printf("%d\n", isascii(15));
**}
*/
