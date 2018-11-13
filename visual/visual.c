/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visual.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: popanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:41:02 by popanase          #+#    #+#             */
/*   Updated: 2018/03/26 19:42:09 by popanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../libft/get_next_line.h"

static void		ft_put_map_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'O' || s[i] == 'o')
		{
			ft_putstr("\x1B[32m");
			ft_putchar(s[i]);
			ft_putstr("\x1B[0m");
		}
		else if (s[i] == 'X' || s[i] == 'x')
		{
			ft_putstr("\x1B[31m");
			ft_putchar(s[i]);
			ft_putstr("\x1B[0m");
		}
		else if (s[i] == '.')
			ft_putchar(' ');
		else
			ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int				main(void)
{
	char *s;

	while (get_next_line(0, &s) > -1)
	{
		if (s[0] && s[1] && s[2] && ft_isdigit(s[0]) && ft_isdigit(s[1])
			&& ft_isdigit(s[2]))
			ft_put_map_str(s);
		else
			ft_putendl(s);
		if (ft_strncmp(s, "== X fin:", 9) == 0)
			exit(0);
		if (ft_strncmp(s, "error", 5) == 0)
			exit(0);
		free(s);
	}
	return (1);
}
