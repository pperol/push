/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:41:45 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:44:17 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Tri radix utilisant les opérateurs bitwise 

#include "../push_swap.h"

void	ft_radix_sort(t_stack **stk_a, t_stack **stk_b)
{
	t_stack		*head_a;
	int			i;
	int			j;
	int			size;
	int			max_bits;

	i = 0;
	size = (*stk_a)->size;
	max_bits = ft_get_bytes(stk_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stk_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stk_a);
			else
				pb(stk_a, stk_b);
		}
		while ((*stk_b) && (*stk_b)->size != 0)
			pa(stk_a, stk_b);
		i++;
	}
}
