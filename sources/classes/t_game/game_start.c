/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:35:34 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/28 15:08:08 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		game_start(t_game *game)
{
	mlx_loop_hook(game->mlx.ptr, &hook_loop, (void *)game);
	mlx_loop(game->mlx.ptr);
}
