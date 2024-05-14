/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:27:48 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/14 11:36:25 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_pfputchar(char c, size_t *count);
int		ft_pfputstr(char *string, size_t *count);
int		ft_pfputnbr(int n, size_t *count);
int		ft_pfputunbr(unsigned int n, size_t *count);
int		ft_pfputhex(unsigned int n, size_t *count, int upcase);
int		ft_pfputptr(void *ptr, size_t *count);
char	*ft_pfitoa(long long int n, int is_unsigned);

#endif
