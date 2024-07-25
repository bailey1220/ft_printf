/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:52:02 by bachai            #+#    #+#             */
/*   Updated: 2024/07/25 15:06:26 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	put_ptr(uintptr_t num)
{
	char	hex_chars;

	hex_chars[] = "0123456789abcdef";
	if (num >= 16)
	{
		put_ptr (num / 16);
		put_ptr (num % 16);
	}
	else
		ft_putchar_fd (hex_chars[num], 1);
}

int	print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += write (1, "0x", 2);
	if (print_len == 0)
		write (1, "0", 1);
	else
	{
		put_ptr (num);
		print_len = ptr_len(num);
	}
	return (print_len);
}
