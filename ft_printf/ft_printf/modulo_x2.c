/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo_x2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:31:56 by artainmo          #+#    #+#             */
/*   Updated: 2019/11/25 18:17:05 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_x_writ(char m, t_flags *flags, int *ret_str_l, va_list *a)
{
	unsigned char	u;
	char			*s;
	int				witdh;
	t_norm			norm;

	u = va_arg(*a, int);
	if (u == 0 && flags->precision != 0)
		s = "0";
	else
		s = ft_dec_to_hex_lowercase(u);
	witdh = ft_strlen2(s);
	norm.s = s;
	norm.precision = flags->precision;
	if (!flags->minus_flag)
		ft_min_witdh(flags->min_witdh, &witdh, ret_str_l, flags);
	ft_u_precision(&witdh, ret_str_l, norm, m);
	ft_m_h_putstr(s, ret_str_l);
	if (flags->minus_flag)
		ft_min_witdh(flags->min_witdh, &witdh, ret_str_l, flags);
	if (u != 0)
		free(s);
}

void	ft_x2_writ(char m, t_flags *flags, int *ret_str_l, va_list *a)
{
	unsigned short int	u;
	char				*s;
	int					witdh;
	t_norm				norm;

	u = va_arg(*a, int);
	if (u == 0 && flags->precision != 0)
		s = "0";
	else
		s = ft_dec_to_hex_lowercase(u);
	witdh = ft_strlen2(s);
	norm.s = s;
	norm.precision = flags->precision;
	if (!flags->minus_flag)
		ft_min_witdh(flags->min_witdh, &witdh, ret_str_l, flags);
	ft_u_precision(&witdh, ret_str_l, norm, m);
	ft_m_h_putstr(s, ret_str_l);
	if (flags->minus_flag)
		ft_min_witdh(flags->min_witdh, &witdh, ret_str_l, flags);
	if (u != 0)
		free(s);
}
