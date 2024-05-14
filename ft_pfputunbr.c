/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:25:36 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/13 13:25:43 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pfputunbr(unsigned int n, size_t *count)
{
	int		error;
	char	*str;
	int		i;

	str = ft_pfitoa(n, 1);
	if (!str)
		return (-1);
	error = 0;
	i = 0;
	while (str[i] != '\0' && error != -1)
	{
		error = ft_pfputchar(str[i], count);
		i++;
	}
	free(str);
	return (error);
}
