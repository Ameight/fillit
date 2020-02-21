/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:27:54 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/27 00:00:19 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t byte)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)str;
	while (byte-- > 0)
		*(ptr++) = c;
	return (str);
}
