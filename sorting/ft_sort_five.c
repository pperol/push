/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:12:19 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:45:47 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trie cinq éléments

#include "../push_swap.h"

void	ft_sort_five(t_stack **stk_a, t_stack **stk_b)
{
	int	index;

	index = ft_largest_nbr(stk_a);
	if (index == 1)
		sa(stk_a);
	else if (index == 2)
	{
		ra(stk_a);
		sa(stk_a);
	}
	else if (index == 3)
	{
		rra(stk_a);
		rra(stk_a);
	}
	else if (index == 4)
		rra(stk_a);
	pb(stk_a, stk_b);
	ft_sort_four(stk_a, stk_b);
	pa(stk_a, stk_b);
	ra(stk_a);
}
