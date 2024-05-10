/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/10 14:48:39 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pfputstr(char *str, size_t *count)
{
	size_t	i;
	
	if (!str)
		return(ft_pfputstr("(null)", count));
	if (*str == '\0')
		return ;
	i = 0;
	while (str[i])
	{
		ft_pfputchar(str[i], count);
		i++;
	}
}
