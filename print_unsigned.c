/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:18:15 by bachai            #+#    #+#             */
/*   Updated: 2024/07/19 13:25:29 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	num_length(unsigned int num)
{
	int length;

	length = 0;
	if (num == 0)
		return (1);
	if (num > 9)
	{
		num =/ 10;
		length++;
	}
	return (length);
}

int	print_unsigned(unsigned int num)
{
	char array;
	int length;
	int i;

	length = num_length(num);
	i = length - 1;
	if (num == 0)
	{
		array[0] = '0';
		array[1] = '/0';
	}
	else
	{
		while (num > 0)
		{
			array[i] = num % 10 + '0';
			num /= 10;
			i--;
		}
		array[i] = '/0';
	}
	write (1, &array[i], length);
}