/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:23:42 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/11 13:36:53 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	conversion(va_list args, const char *str, size_t *count)
{
	int	error;

	error = 0;
	if (*str == 'c')
		error = ft_pfputchar(va_arg(args, int), count);
	else if (*str == 's')
		error = ft_pfputstr(va_arg(args, char *), count);
	else if (*str == 'p')
		error = ft_pfputptr(va_arg(args, void *), count);
	else if (*str == 'd' || *str == 'i')
		error = ft_pfputnbr(va_arg(args, int), count);
	else if (*str == 'u')
		error = ft_pfputunbr(va_arg(args, unsigned int), count);
	else if (*str == 'x')
		error = ft_pfputhex(va_arg(args, int), count, 0);
	else if (*str == 'X')
		error = ft_pfputhex(va_arg(args, int), count, 1);
	else if (*str == '%')
		error = ft_pfputchar('%', count);
	return (error);
}

int	ft_printf(const char *str, ...)
{
	size_t	count;
	int		error;
	va_list	args;

	count = 0;
	error = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str && error != -1)
	{
		if (*str == '%')
		{
			str++;
			error = conversion(args, str, &count);
		}
		else
			error = ft_pfputchar(*str, &count);
		str++;
	}
	va_end(args);
	if (error < 0)
		return (-1);
	return (count);
}
