/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:51:43 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/23 22:22:09 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *src, const void *str, size_t num)
{
	unsigned char		*ptr;
	unsigned char		*ptr2;

	if (!src && !str)
		return (src);
	ptr = (unsigned char*)src;
	ptr2 = (unsigned char*)str;
	while (num-- > 0)
		*(ptr++) = *(ptr2++);
	return (src);
}
