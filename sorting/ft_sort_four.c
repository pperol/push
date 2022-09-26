/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:01:39 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 23:04:14 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trie quatre éléments

#include "../push_swap.h"

void	ft_sort_four(t_stack **stk_a, t_stack **stk_b)
{
	int	rank;

	rank = ft_smallest_nbr(stk_a);
	if (rank == 1)
		sa(stk_a);
	else if (rank == 2)
	{
		ra(stk_a);
		ra(stk_a);
	}
	else if (rank == 3)
		rra(stk_a);
	pb(stk_a, stk_b);
	ft_sort_three(stk_a);
	pa(stk_a, stk_b);
}
