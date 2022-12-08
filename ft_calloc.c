/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:24:53 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/22 17:46:11 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = count * size;
	if (count && i / count != size)
		return (NULL);
	else if (size && i / size != count)
		return (NULL);
	str = malloc(i);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
