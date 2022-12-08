/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:03:52 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/11 16:23:52 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	isinside(char c, char const *set)
{
	int	i;
	int	bol;

	bol = 0;
	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (c == (char)set[i])
			bol = 1;
		i++;
	}
	return (bol);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*new;
	int		index;
	int		index2;

	i = 0;
	if (!s1)
		return (ft_strdup(""));
	while (s1[i] && isinside(s1[i], set))
		i++;
	index = i;
	i = ft_strlen(s1);
	while (i > 0 && isinside(s1[i - 1], set) && i > index)
		i--;
	index2 = i;
	new = malloc ((index2 - index) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (s1[++i] && i + index < index2)
	{
		new[i] = s1[i + index];
	}
	new[i] = '\0';
	return (new);
}
