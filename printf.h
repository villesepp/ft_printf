/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:08:58 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/13 10:31:29 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_pfputchar(char c, size_t *count);
int		ft_pfputstr(char *string, size_t *count);
int		ft_pfputnbr(int n, size_t *count);
int		ft_pfputunbr(unsigned int n, size_t *count);
int		ft_pfputhex(unsigned int n, size_t *count, int upcase);
int		ft_pfputptr(void *ptr, size_t *count);
char	*ft_pfitoa(long long int n, int is_unsigned);

#endif
