/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:03:34 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:46:42 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trie une pilae a à l'aide d'une pile b 

#include "../push_swap.h"

void	ft_sort_stack(t_stack **stk_a, t_stack **stk_b)
{
	if ((*stk_a)->size == 1)
		return ;
	else if ((*stk_a)->size == 2)
	{
		ft_sort_two(stk_a);
		return ;
	}
	else if ((*stk_a)->size == 3)
	{
		ft_sort_three(stk_a);
		return ;
	}
	else if ((*stk_a)->size == 4)
	{
		ft_sort_four(stk_a, stk_b);
		return ;
	}
	else if ((*stk_a)->size <= 5)
		ft_sort_five(stk_a, stk_b);
	else
		ft_radix_sort(stk_a, stk_b);
	return ;
}
