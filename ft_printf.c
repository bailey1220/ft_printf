/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:46:52 by bachai            #+#    #+#             */
/*   Updated: 2024/07/25 15:14:21 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include 

int	check_type(const char *input, ...)
{
	int i;
u
	i = 0;
	if (*input == 'c')
		i += print_char((int)args);
	if (*input == 's')
		i += print_str((char)args);
	if (*input == 'p')
		i += print_ptr((unsigned char)args);
	if (*input == 'd')
		i += print_nbr((int)args);
	if (*input == 'i')
		i += print_nbr((int)args);
	if (*input == 'u')
		i += print_nbr((unsigned int)args);
	if (*input == 'x')
		i += print_hex((unsigned int)args);
	if (*input == 'X')
		i += print_hex((unsigned int)args);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	int i;
	va_list	args;

	i = 0;
	va_start(args, format);cspdiuxX%
	while (*input != '\0')
	{
		if (*input == '%')
		{
			ft_strchr("cspdiuxX", input);
			i =+ check_type(input, va_arg(args));
		}
		else if (*input == '%')
			print_char('%');
		

	}
			
			






}
