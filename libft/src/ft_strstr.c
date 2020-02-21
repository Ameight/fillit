/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:00:21 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/16 16:44:59 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int lenght;

	i = 0;
	if (!*to_find)
		return ((char *)(str));
	lenght = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
			j++;
		if (j == lenght)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
