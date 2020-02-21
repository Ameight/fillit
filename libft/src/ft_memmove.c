/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:28:15 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/19 22:09:29 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdst;
	const char		*psrc;
	size_t			i;

	psrc = src;
	pdst = dst;
	i = 0;
	if (pdst > psrc)
	{
		while (len > 0)
		{
			--len;
			pdst[len] = psrc[len];
		}
	}
	else if (pdst < psrc)
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
