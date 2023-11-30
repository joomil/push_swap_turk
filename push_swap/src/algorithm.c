/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:19:16 by jmilesi          #+#    #+#             */
/*   Updated: 2023/11/29 22:19:37 by jmilesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi2(char *str)
{
	int				sign;
	int				j;
	long long int	i;

	i = 0;
	j = 0;
	sign = 1;
	while (str && (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13)))
		j++;
	if (str[j] == '-')
	{
		sign = -1;
		j++;
	}
	else if (str[j] == '+')
		j++;
	while (str[j])
	{
		if (!ft_isdigit(str[j]))
			ft_error();
		i = i * 10 + (str[j++] - 48);
	}
	if ((sign * 1) > 2147483647 || (sign * i) < -2147483648)
		ft_error();
	return (sign * i);
}

t_stack	*ft_sub_process(char **av)
{
	t_stack	*a;
	char	**temp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	temp = ft_split(av[1], 32);
	while (temp[i])
	{
		j = ft_atoi2(temp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(temp);
	free(temp);
	return (a);
}

t_stack	*ft_process(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (ac < 2)
		ft_error();
	if (ac == 2)
		a = ft_sub_process(av);
	else
	{
		while (i < ac)
		{
			j = ft_atoi2(av[i]);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}
