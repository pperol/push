/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_bytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:32:24 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 11:05:49 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cherche le nombre occupant le maximum de bits.
// Renvoi ce nombre.

#include "../push_swap.h"

int	ft_get_bytes(t_stack **stk)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stk;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
