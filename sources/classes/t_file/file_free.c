/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 12:33:35 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/28 11:43:41 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_file			*file_free(t_file *file)
{
	ft_lstclear(&file->data, &free);
	free(file);
	return (NULL);
}
