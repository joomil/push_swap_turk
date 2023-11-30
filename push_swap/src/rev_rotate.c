/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:25:28 by jmilesi           #+#    #+#             */
/*   Updated: 2023/11/30 16:12:19 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a, int j)
{
	t_stack	*tmp;
	int		i;

	if (!a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int j)
{
	t_stack	*temp;
	int		i;

	if (!(*b)->next)
		return ;
	i = 0;
	temp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (j == 0)
		write(1, "rrb\n", 4);
}

void	ft_rr_sub(t_stack **b, int j)
{
	(void)b;
	if (j == 0)
		write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	ft_rra(a, 1);
	ft_rrb(b, 1);
	ft_rr_sub(b, j);
}

