/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:28:24 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/27 00:03:49 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*tmp;
	size_t		i;

	tmp = str;
	i = ft_strlen(to_find);
	if (i == 0)
		return ((char *)tmp);
	while (len && *tmp)
	{
		if (len >= i)
		{
			if (!(ft_strncmp(tmp, to_find, i)))
				return ((char *)tmp);
		}
		tmp++;
		len--;
	}
	return (0);
}
