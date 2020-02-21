/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:30:38 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/23 20:12:18 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		++i;
	}
	return (tmp);
}
