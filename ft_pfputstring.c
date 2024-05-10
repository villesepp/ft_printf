/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/08 12:47:00 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pfputstr(char *string, size_t *count)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		ft_pfputchar(string[i], count);
		i++;
	}
	(*count)++;
}
