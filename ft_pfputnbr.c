/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:40:09 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/13 10:22:31 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pfputnbr(int n, size_t *count)
{
	int		error;
	char	*str;
	int		i;

	str = ft_pfitoa(n, 0);
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
