/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:43:27 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/22 19:44:58 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		final;
	int		tru;
	char	*f;

	tru = 0;
	i = -1;
	final = 0;
	f = (char *)s;
	while (s[++i])
	{
		if (s[i] == (unsigned char)c)
		{
			final = i;
			tru = 1;
		}
	}
	if (s[i] == (unsigned char)c)
	{
		final = i;
		tru = 1;
	}
	if (tru == 1)
		return (&f[final]);
	return (NULL);
}
