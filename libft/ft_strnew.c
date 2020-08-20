/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:39:46 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/09 15:12:39 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
**int		main(void)
**{
**	char	*str;
**
**	str = ft_strnew(5);
**	printf("%p\n", str);
**	str[0] = 'v';
**	str[1] = 'a';
**	str[2] = 'l';
**	str[3] = 'e';
**	str[4] = 'r';
**	printf("%s\n", str);
**}
*/
