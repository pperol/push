/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:06:50 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:59:49 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Remplit la stack 
// Revoie le 1er nœud

#include "../push_swap.h"

t_stack	*ft_fill_stack(char **arg, int argc)
{
	int			rank;
	t_stack		*tmp;
	t_stack		*stk;
	t_stack		*first;

	rank = 1;
	tmp = 0;
	while (arg[rank])
	{
		stk = (t_stack *)malloc(sizeof(t_stack));
		if (!stk)
			return (NULL);
		if (tmp)
			tmp->next = stk;
		else
			first = stk;
		stk->nbr = ft_atoi(arg[rank]);
		stk->size = argc - 1;
		stk->rank = rank - 1;
		stk->next = NULL;
		tmp = stk;
		rank++;
	}
	return (first);
}
