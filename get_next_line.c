/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:02:28 by nabbassi          #+#    #+#             */
/*   Updated: 2020/09/17 14:38:44 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**	This function allow to find the position of the index
**	untill the end of the line.
*/

static int		ft_endofline(const char *s)
{
	int				i;
	int				end_of_line_found;

	i = 0;
	end_of_line_found = 0;
	while (s[i] != '\0' && !end_of_line_found)
	{
		if (s[i] == '\n')
			end_of_line_found = 1;
		else
			i++;
	}
	return (i);
}

/*
**	This function is used to read each line untill the end of the file.
*/

static char		*ft_lineread(char *stock)
{
	char		*str;

	str = ft_strchr(stock, '\n');
	if (str || (ft_endofline(stock) > 0))
	{
		if (str)
			ft_strcpy(stock, str + 1);
		else
			stock[0] = '\0';
		return (stock);
	}
	return (NULL);
}

/*
**	The GNL function, first, checks for basic errors.
**
**	While there is no line (\n terminated) available in the static buffer,
**	and there is some content to read in the file.
**  It adds it at the end of the static buffer.
**
**  Then it extracts the line to return (if there is something to extract).
**	If returns '0' if there were no content.
*/

int				get_next_line(int const fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*stock;
	int			res;
	char		*ptr;

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (!stock && (stock = ft_strnew(0)) == NULL)
		return (-1);
	while (!(ft_strchr(stock, '\n')) && (res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		ptr = stock;
		stock = ft_strjoin(ptr, buff);
		ft_strdel(&ptr);
	}
	*line = ft_strsub(stock, 0, ft_endofline(stock));
	if (ft_lineread(stock) == NULL)
		return (0);
	return (1);
}
