/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:19:00 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/09 15:12:53 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}

/*
**int			main(void)
**{
**	int c;
**
**	c = c - 32;
**	printf("%c\n", ft_toupper('a'));
**	printf("%c\n", toupper('a'));
**}
*/
