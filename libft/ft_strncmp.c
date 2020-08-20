/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:38:15 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/10 16:56:49 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else if (s1[i] == s2[i])
		return (0);
	else
		return (-1);
}

/*
** #include <stdio.h>
** int main()
** int a =  ft_strncmp("cba", "abc", 2);
** int b = strncmp("cba", "abc", 2);
** printf("%d %d \n", a, b);
** return 0;
*/
