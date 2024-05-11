/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/11 13:03:28 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pfputstr(char *str, size_t *count)
{
	size_t	i;
	int		error;

	error = 0;
	if (!str)
		return(ft_pfputstr("(null)", count));
	if (*str == '\0')
		return (error);
	i = 0;
	while (str[i] && error != -1)
	{
		error = ft_pfputchar(str[i], count);
		i++;
	}
	return (error);
}
