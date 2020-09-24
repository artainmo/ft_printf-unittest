/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_ftoa2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:20:40 by artainmo          #+#    #+#             */
/*   Updated: 2019/11/25 20:53:38 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*ft_norm_set_point_back(int *point, char *s)
{
	int		i;
	char	*s2;

	i = 0;
	*point = 1;
	if (!(s2 = malloc(sizeof(char) * (ft_strlen2(s) + 1))))
		g_error = 1;
	while (s[i])
	{
		s2[0] = 49;
		s2[i + 1] = s[i];
		i++;
	}
	s2[i + 1] = '\0';
	free(s);
	return (s2);
}

static char	*ft_set_point_back(char *str, int *point)
{
	int		i;
	char	*s;

	i = 0;
	if (!(s = malloc((sizeof(char) * (ft_strlen2(str) + 1)))))
		g_error = 1;
	while (*point)
	{
		s[i] = str[i];
		i++;
		*point = *point - 1;
	}
	s[i] = '.';
	while (str[i])
	{
		s[i + 1] = str[i];
		i++;
	}
	s[i + 1] = '\0';
	i = 0;
	free(str);
	if (s[0] == '0')
		return (ft_norm_set_point_back(point, s));
	return (s);
}

char		*ft_last_dec2(char *str, int i, int l, int point)
{
	i = ft_strlen2(str);
	if (str[i - 1] >= '5')
	{
		if (str[i - 2] == '9')
		{
			l = i;
			str = ft_no_point_g(str, &point);
			str[i - 3] = str[i - 3] + 1;
			str[i - 2] = '0';
			l--;
			while (str[l - 2] == 58)
			{
				str[l - 3] = str[l - 3] + 1;
				str[l - 2] = '0';
				l--;
			}
			str = ft_set_point_back(str, &point);
			if (point)
				i++;
		}
		else
			str[i - 2] = str[i - 2] + 1;
	}
	str[i - 1] = '\0';
	return (str);
}

char		*ft_last_decg(char *str)
{
	int i;
	int l;
	int point;

	i = 0;
	l = 0;
	point = 0;
	return (ft_last_dec2(str, i, l, point));
}

int			ft_count_b_zeros(char *str)
{
	int i;

	i = 1;
	while (str[i] == '0')
		i++;
	return (i - 1);
}
