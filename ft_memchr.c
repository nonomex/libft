/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:12:54 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/22 19:09:07 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*g;

	g = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (g[i] == (unsigned char)c)
			return (g + i);
		i++;
	}
	return (NULL);
}
