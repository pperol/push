/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:41:28 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:51:17 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_give_index(t_stack *stk, int argc)
{
	int			index;
	long		min_precedant;
	long		min_courant;
	t_stack		*first;

	min_precedant = -2147483649;
	index = 0;
	first = stk;
	while (index < argc - 1)
	{
		stk = first;
		min_courant = 2147483648;
		while (stk)
		{
			if (stk->nbr < min_courant && stk->nbr > min_precedant)
			{
				stk->index = index;
				min_courant = stk->nbr;
			}
			stk = stk->next;
		}		
		min_precedant = min_courant;
		index++;
	}
}
