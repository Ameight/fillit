/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:22:49 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/20 17:26:10 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	if (c == '\0')
		return ((char *)(str + i));
	while (--i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
	}
	return (NULL);
}
