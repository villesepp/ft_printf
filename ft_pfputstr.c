/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:25:10 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/14 12:21:17 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pfputstr(char *str, size_t *count)
{
	size_t	i;
	int		error;

	error = 0;
	if (!str)
		return (ft_pfputstr("(null)", count));
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
