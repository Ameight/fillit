/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:17:01 by ejuana            #+#    #+#             */
/*   Updated: 2019/11/14 22:19:28 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *tmp;

	if (!s1 || !s2 || !(tmp = ft_strnew(sizeof(char) *
	(ft_strlen((char *)s1) + ft_strlen((char *)s2)))))
		return (NULL);
	tmp = ft_strcpy(tmp, s1);
	if (!(tmp = ft_strcat(tmp, (char *)s2)))
		return (NULL);
	return (tmp);
}
