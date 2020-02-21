/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:28:19 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 22:21:00 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_char(char const *str, char c)
{
	int flag;
	int count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (!flag && *str != c)
		{
			count++;
		}
		flag = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}
