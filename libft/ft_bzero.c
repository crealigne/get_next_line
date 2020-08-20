/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:49:14 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/13 12:09:22 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	while (n > 0)
	{
		*d = '\0';
		d++;
		n--;
	}
}

/*
** int	main(void)
** {
**	size_t		n;
** 	n = 0;
** 	char	*d;
**	d = NULL;
** 	printf("%s\n", bzero(d,n));
** 	return (0);
**}
*/
