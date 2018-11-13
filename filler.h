/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: popanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:35:49 by popanase          #+#    #+#             */
/*   Updated: 2018/05/03 13:45:21 by popanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define ABS(x) (((x) > 0) ? (x) : (-1) * (x))
# define DIST(i, j, k, l) (ABS(i - k) + ABS(j - l))
# include "libft/libft.h"
# include "libft/get_next_line.h"

typedef struct	s_map
{
	int		w;
	int		h;
	char	**m;
	char	**p;
	int		pw;
	int		ph;
	char	pc;
	char	oc;
}				t_map;

typedef struct	s_sol
{
	int		h;
	int		w;
	int		d;
}				t_sol;

void			ft_play(t_map *map, t_sol *s);

#endif
