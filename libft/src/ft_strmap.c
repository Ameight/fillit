/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:14:51 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/22 20:37:03 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		tmp[i] = (*f)(s[i]);
		++i;
	}
	return (tmp);
}
