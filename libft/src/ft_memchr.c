/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:37:50 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 23:59:44 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*local;

	ch = (unsigned char)c;
	local = (unsigned char *)s;
	while (n--)
	{
		if (*local == ch)
			return ((void *)local);
		local++;
	}
	return (NULL);
}
