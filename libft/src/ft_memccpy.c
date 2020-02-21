/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:14:15 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 23:59:35 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *src, const void *str, int c, size_t num)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_str;

	ptr_src = (unsigned char*)src;
	ptr_str = (unsigned char*)str;
	i = 0;
	while (i < num)
	{
		ptr_src[i] = ptr_str[i];
		if (ptr_src[i] == (unsigned char)c)
			return ((void *)(src + i + 1));
		++i;
	}
	return (NULL);
}
