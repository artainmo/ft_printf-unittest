# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artainmo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 20:25:57 by artainmo          #+#    #+#              #
#    Updated: 2019/11/29 16:47:55 by artainmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC1 =  ft_atoi.c \
			 ft_decimal_to_hexadecimal_lowercase.c \
			 ft_decimal_to_hexadecimal_uppercase.c \
			 ft_e_ftoa.c \
			 ft_e_ftoa2.c \
			 ft_find_modulo.c \
			 ft_find_modulo2.c \
			 ft_ftoa.c \
			 ft_ftoa2.c \
			 ft_g_ftoa.c \
			 ft_g_ftoa2.c \
			 ft_g_no_insignificant.c \
			 ft_itoa.c \
			 ft_m_putnbr.c \
			 ft_m_putstr.c \
			 ft_m_unsigned_putnbr.c \
			 ft_no_point.c \
			 ft_printf.c \
			 ft_scientific_notation.c \
			 ft_scientific_notation2.c \
			 ft_strdup.c \
			 ft_strjoin.c \
			 ft_strlen.c \
			 ft_substr.c \
			 ft_utoa.c \
			 ft_write_argument.c \
			 modulo_bx.c \
			 modulo_bx2.c \
			 modulo_c.c \
			 modulo_e.c \
			 modulo_f.c \
			 modulo_g.c \
			 modulo_h.c \
			 modulo_hash.c \
			 modulo_i.c \
			 modulo_i2.c \
			 modulo_n.c \
			 modulo_p.c \
			 modulo_p.c \
			 modulo_plus.c \
			 modulo_s.c \
			 modulo_u.c \
			 modulo_u2.c \
			 modulo_x.c \
			 modulo_x2.c \
			 witdh_precision.c \
			 witdh_precision2.c \

SRC2 = ft_printf_bonus/ft_atoi_bonus.c \
			ft_printf_bonus/ft_calloc_bonus.c \
			ft_printf_bonus/ft_decimal_to_hexadecimal_lowercase_bonus.c \
			ft_printf_bonus/ft_decimal_to_hexadecimal_uppercase_bonus.c \
			ft_printf_bonus/ft_e_ftoa_bonus.c \
			ft_printf_bonus/ft_e_ftoa2_bonus.c \
			ft_printf_bonus/ft_find_modulo_bonus.c \
			ft_printf_bonus/ft_find_modulo2_bonus.c \
			ft_printf_bonus/ft_ftoa_bonus.c \
			ft_printf_bonus/ft_ftoa2_bonus.c \
			ft_printf_bonus/ft_g_ftoa_bonus.c \
			ft_printf_bonus/ft_g_ftoa2_bonus.c \
			ft_printf_bonus/ft_g_no_insignificant_bonus.c \
			ft_printf_bonus/ft_itoa_bonus.c \
			ft_printf_bonus/ft_m_putnbr_bonus.c \
			ft_printf_bonus/ft_m_putstr_bonus.c \
			ft_printf_bonus/ft_m_unsigned_putnbr_bonus.c \
			ft_printf_bonus/ft_no_point_bonus.c \
			ft_printf_bonus/ft_printf_bonus.c \
			ft_printf_bonus/ft_scientific_notation_bonus.c \
			ft_printf_bonus/ft_scientific_notation2_bonus.c \
			ft_printf_bonus/ft_strdup_bonus.c \
			ft_printf_bonus/ft_strjoin_bonus.c \
			ft_printf_bonus/ft_strlen_bonus.c \
			ft_printf_bonus/ft_substr_bonus.c \
			ft_printf_bonus/ft_utoa_bonus.c \
			ft_printf_bonus/ft_write_argument_bonus.c \
			ft_printf_bonus/modulo_bx_bonus.c \
			ft_printf_bonus/modulo_bx2_bonus.c \
			ft_printf_bonus/modulo_c_bonus.c \
			ft_printf_bonus/modulo_e_bonus.c \
			ft_printf_bonus/modulo_f_bonus.c \
			ft_printf_bonus/modulo_g_bonus.c \
			ft_printf_bonus/modulo_h_bonus.c \
			ft_printf_bonus/modulo_hash_bonus.c \
			ft_printf_bonus/modulo_i_bonus.c \
			ft_printf_bonus/modulo_i2_bonus.c \
			ft_printf_bonus/modulo_n_bonus.c \
			ft_printf_bonus/modulo_p_bonus.c \
			ft_printf_bonus/modulo_p_bonus.c \
			ft_printf_bonus/modulo_plus_bonus.c \
			ft_printf_bonus/modulo_s_bonus.c \
			ft_printf_bonus/modulo_u_bonus.c \
			ft_printf_bonus/modulo_u2_bonus.c \
			ft_printf_bonus/modulo_x_bonus.c \
			ft_printf_bonus/modulo_x2_bonus.c \
			ft_printf_bonus/witdh_precision_bonus.c \
			ft_printf_bonus/witdh_precision2_bonus.c \

NAME = libftprintf.a
OBJS = *.o
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
GCC = gcc
RM = rm -rf
HEADER = ./

all: $(NAME)

$(OBJS): $(SRC1)
	$(GCC) $(CFLAGS) -c $(SRC1)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:
	$(GCC) $(CFLAGS) -c $(SRC2)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test clean fclean re bonus
