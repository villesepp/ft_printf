/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:08:58 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/11 13:36:50 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h> // for write
# include <stdarg.h> // for varg
# include <stdint.h> // for pointer to int

int		ft_printf(const char *str, ...);
int		ft_pfputchar(char c, size_t *count);
int		ft_pfputstr(char *string, size_t *count);
int		ft_pfputnbr(int n, size_t *count);
int		ft_pfputunbr(unsigned int n, size_t *count);
int		ft_pfputhex(unsigned int n, size_t *count, int upcase);
int		ft_pfputptr(void *ptr, size_t *count);

#endif
