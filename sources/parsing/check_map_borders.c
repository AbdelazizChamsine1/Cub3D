/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_borders.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achamsin <achamsin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:18:01 by alexa             #+#    #+#             */
/*   Updated: 2025/06/14 13:53:53 by achamsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	check_top_or_bottom(char **map_tab, int i, int j)
{
	if (!map_tab || !map_tab[i] || !map_tab[i][j])
		return (FAILURE);
	while (map_tab[i][j] == ' ' || map_tab[i][j] == '\t'
	|| map_tab[i][j] == '\r' || map_tab[i][j] == '\v'
	|| map_tab[i][j] == '\f')
		j++;
	while (map_tab[i][j])
	{
		if (map_tab[i][j] != '1')
			return (FAILURE);
		j++;
	}
	return (SUCCESS);
}

int	check_left_or_right(t_mapinfo *map, char **map_tab)
{
	int	i;
	int	j;

	if (check_top_or_bottom(map_tab, 0, 0) == FAILURE)
		return (FAILURE);
	i = 1;
	while (i < (map->height - 1))
	{
		j = ft_strlen(map_tab[i]) - 1;
		if (map_tab[i][0] != '1' || map_tab[i][j] != '1')
			return (FAILURE);
		i++;
	}
	if (check_top_or_bottom(map_tab, i, 0) == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}
