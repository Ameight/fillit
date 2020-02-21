/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:53:25 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 22:17:42 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen_base(int c, int length, int base)
{
	if (base < 0)
		return (0);
	while (c)
	{
		c /= base;
		length++;
	}
	return (length);
}
