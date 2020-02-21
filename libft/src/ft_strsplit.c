/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:15:04 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/26 23:47:45 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*abort_split(const char **array)
{
	size_t	i;

	i = -1;
	if (!array)
		return (0);
	while (array[++i])
		free((void *)array[i]);
	free((void *)array);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	size_t	flag;
	size_t	index;
	size_t	i;
	size_t	start;

	if (!s || !(tmp = \
	(char **)ft_memalloc(sizeof(char *) * (ft_len_char(s, c) + 1))))
		return (NULL);
	flag = 0;
	i = -1;
	index = -1;
	start = 0;
	while (s[++i])
	{
		if (s[i] == c && flag && \
		!(tmp[++index] = ft_strsub(s, start, i - start)))
			return (abort_split((const char **)tmp));
		if (!flag && s[i] != c)
			start = i;
		flag = (s[i] == c) ? 0 : 1;
	}
	if (flag)
		tmp[++index] = ft_strsub(s, start, i - start);
	return (tmp);
}
