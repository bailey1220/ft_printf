/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:59:27 by bachai            #+#    #+#             */
/*   Updated: 2024/07/21 17:45:19 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num)
{
	char	digit;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr (-n);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr (n / 10);
			ft_putnbr (n % 10);
		}
		else
		{
			digit = n + '0';
			write(1, &digit, 1);
		}
	}
}

void	print_unsigned(unsigned int num)
{
	char	digit;

	if (n >= 10)
	{
		put_nbr(n / 10, len);
		put_nbr(n % 10, len);
	}
	else
	{
		digit = n + '0';
		write (1, &digit, 1);
	}
}
