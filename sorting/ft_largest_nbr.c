/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largest_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:27:06 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 22:03:06 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parcourt la stack et index le plus grand élément 

#include "../push_swap.h"

int	ft_largest_nbr(t_stack **stk)
{
	t_stack	*tmp;

	tmp = *stk;
	while (tmp)
	{
		if (tmp->index == tmp->size - 1)
			return (tmp->rank);
		tmp = tmp->next;
	}
	return (0);
}
