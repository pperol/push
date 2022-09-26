/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:19:53 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 22:02:42 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parcourt la stack et index le plus petit élément 

#include "../push_swap.h"

int	ft_smallest_nbr(t_stack **stk)
{
	t_stack	*tmp;

	tmp = *stk;
	while (tmp)
	{
		if (tmp->index == 0)
			return (tmp->rank);
		tmp = tmp->next;
	}
	return (0);
}
