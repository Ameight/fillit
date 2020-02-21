/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_norm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:48:33 by ejuana            #+#    #+#             */
/*   Updated: 2019/11/14 22:04:45 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_norm(char const *s1, char const *s2)
{
	char *tmp;

	if (!s1 && !s2)
		return (NULL);
	if ((!(tmp = ft_strnew(sizeof(char) * (ft_strlen((char *)s1) +
		ft_strlen((char *)s2))))))
		return (NULL);
	tmp = ft_strcpy(tmp, s1);
	if (!(tmp = ft_strcat(tmp, (char *)s2)))
		return (NULL);
	return (tmp);
}
