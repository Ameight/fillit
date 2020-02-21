/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:23:32 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 19:18:43 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *tmp;

	tmp = dest;
	while (n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n && *dest)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (tmp);
}
