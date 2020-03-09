/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_close_win.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:54:30 by ancoulon          #+#    #+#             */
/*   Updated: 2020/03/09 12:58:01 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/t_inst.h"

void		inst_close_win(t_inst instance)
{
	if (instance.win.ptr)
		mlx_destroy_window(instance.mlx_ptr, instance.win.ptr);
}
