/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:33:31 by aammirat          #+#    #+#             */
/*   Updated: 2022/12/03 09:34:01 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	testforfree(char **new, int nb)
{
	while (nb--)
		free(new[nb]);
	free(new);
}

static int	worldnb(char const *s, int index, char c)
{
	int	world;

	world = 0;
	while (s[index] && s[index] != c)
	{
		index++;
		world++;
	}
	return (world);
}

static char	**ft_splitted(char const *s, char c, char **new, int nb)
{
	int	index;
	int	world;
	int	i;
	int	tab;

	tab = 0;
	i = 0;
	index = 0;
	while (tab < nb)
	{
		if (s[i] != c)
		{
			world = worldnb(s, i, c);
			new[tab] = ft_substr(s, i, world);
			if (!new[tab])
			{
				testforfree(new, tab);
				return (NULL);
			}
			tab++;
			i += world;
		}
		i++;
	}
	return (new);
}

static int	counttab(char *s, char c)
{
	int	i;
	int	nb;
	int	bol;

	bol = 1;
	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c && bol == 1)
		{
			nb++;
			bol = 0;
		}
		if (s[i] == c)
			bol = 1;
		i++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	int		nb;
	char	**new;
	char	*str;

	str = (char *)s;
	nb = counttab(str, c);
	new = malloc((nb + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	new[nb] = NULL;
	return (ft_splitted(str, c, new, nb));
}
