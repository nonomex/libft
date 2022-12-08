/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:58:07 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/16 14:14:57 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:33:41 by aammirat          #+#    #+#             */
/*   Updated: 2022/11/16 11:48:22 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	calcullenght(int n, int i)
{
	if (n < 0)
		return (calcullenght(n * -1, 1));
	if (n < 10)
		return (i + 1);
	return (calcullenght(n / 10, i + 1));
}

static void	itoaa(int n, char *new, int l)
{
	if (n < 0)
	{
		new[0] = '-';
		itoaa(n * -1, &new[1], l - 1);
	}
	else if (n < 10)
		new[l] = n + 48;
	else
	{
		itoaa(n / 10, new, l - 1);
		new[l] = n % 10 + 48;
	}
}

char	*ft_itoa(int n)
{
	char	*new;
	int		lenght;

	if (n == -2147483648)
	{
		new = malloc(12);
		if (!new)
			return (NULL);
		itoaa(n / 10, new, 9);
		new[10] = '8';
		new[11] = '\0';
		return (new);
	}
	lenght = calcullenght(n, 0);
	new = malloc(lenght * sizeof(char) + 1);
	if (!new)
		return (NULL);
	itoaa(n, new, lenght - 1);
	new[lenght] = '\0';
	return (new);
}
