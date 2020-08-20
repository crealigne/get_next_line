/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:57:06 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/05 17:42:14 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int	tmp;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				tmp = 1;
			else
				tmp = -1;
			return (tmp);
		}
		i++;
	}
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		tmp = 1;
	else if (s1[i] == s2[i])
		tmp = 0;
	else
		tmp = -1;
	return (tmp);
}

/*
** int main()
** {
** 	int ret1, ret2;
**
** 	ret1 = ft_strcmp("aa", "ad");
** 	ret2 = strcmp("aa", "ad");
** 	printf("%d\n%d\n", ret1, ret2);
** }
*/
