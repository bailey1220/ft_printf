/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:55:07 by bachai            #+#    #+#             */
/*   Updated: 2024/07/18 18:07:52 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	int nb;
	unsigned int i;

	nb = n;
	i = 1;
	if (nb < 0 && nb != -2147483648)
	{
		nb = -n;
		i++;
	}
	if (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr(nb);

}