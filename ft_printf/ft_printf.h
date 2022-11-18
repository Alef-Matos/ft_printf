/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:17:10 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 18:48:34 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format_str, ...);
int	ft_check_flags(char str, va_list prmts);
int	ft_put_s(char *s);
int	ft_put_c(char c);
int	ft_put_len(const char *s);
int	ft_put_b(long long n, char *b, int b_size, int c_count);
int	ft_put_p(unsigned long long n, char *b, int b_size, int frist_exec);

#endif