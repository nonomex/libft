/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:53:40 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/09 16:47:16 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c;

	i = 0;
	c = (char *)haystack;
	if (needle[i] == '\0')
		return (c);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[j + i] && needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (&c[i]);
	i++;
	}
	return (NULL);
}
