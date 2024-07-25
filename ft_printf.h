/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:45:34 by bachai            #+#    #+#             */
/*   Updated: 2024/07/25 16:53:50 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdargs>
# include <stdint.h>
# include <unistd.h>

# include "./libft/libft.h"

int print_char(char c);
int print_hex(unsigned int num, const char format);
int print_nbr(int num);
int print_ptr(uintptr_t num);
int print_str(char *str);