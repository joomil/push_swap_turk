/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:20:17 by jmilesi          #+#    #+#             */
/*   Updated: 2023/11/29 22:20:18 by jmilesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42) || (c == 44) || (c == 46)
		|| (c == 47))
		return (1);
	return (0);
}

void	alpha_check(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isalpha(av[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int	check_error(char **av, int i, int j)
{
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			if (!ft_isdigit(av[i][j]))
				return (false);
			else if (ft_isdigit(av[i][j]))
			{
				j++;
				if (av[i][j] == '\0')
					break ;
				if (!ft_isdigit(av[i][j]) && (av[i][j] != ' '))
					return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}

int	check_args(char **av)
{
	alpha_check(av);
	if (!check_error(av, 1, 0))
		return (false);
	return (true);
}

void	ft_freestr(char **lst)
{
	char	*n1;

	if (!lst)
		return ;
	while (*lst)
	{
		n1 = *lst;
		lst++;
		free(n1);
	}
	*lst = NULL;
}
