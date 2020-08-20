/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 12:07:29 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/10 14:52:16 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	long	res;
	int		negative;
	int		i;

	i = 0;
	res = 0;
	negative = 1;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' ||
				nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-')
		negative = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i++] - 48);
		if (res < 0)
			return (negative < 0) ? 0 : -1;
	}
	return (res * negative);
}

/*
**int  main(void)
**{
**	printf("atoi('92233720368547758081') = %i\n",
**	atoi("92233720368547758081"));
**	printf("ft_atoi('92233720368547758081') = %i\n",
**	ft_atoi("92233720368547758081"));
**	printf("atoi('-92233720368547758081') = %i\n",
**	atoi("-92233720368547758081"));
**	printf("ft_atoi('-92233720368547758081') = %i\n",
**	ft_atoi("-92233720368547758081"));
**	printf("atoi('045') = %i\n", atoi("045"));
**	printf("ft_atoi('045') = %i\n", ft_atoi("045"));
**	printf("atoi('00000000000000000000123') = %i\n",
**	atoi("00000000000000000000123"));
**	printf("ft_atoi('00000000000000000000123') = %i\n",
**	ft_atoi("00000000000000000000123"));
**	return (0);
**}
*/
