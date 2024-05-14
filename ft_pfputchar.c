/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:23:28 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/13 13:26:16 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pfputchar(char c, size_t *count)
{
	int	result;

	result = write(1, &c, 1);
	if (result == 1)
		(*count)++;
	if (result < 0)
		return (-1);
	return (0);
}
