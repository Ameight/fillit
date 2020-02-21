/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:20:09 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/24 16:12:51 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (s)
	{
		end = ft_strlen(s);
		(end > 0 ? --end : (0));
		while (ft_strwhitespace(s[start]) && start <= end)
			++start;
		while (ft_strwhitespace(s[end]) && start <= end)
			--end;
		return (ft_strsub(s, start, end - start + 1));
	}
	return (0);
}
