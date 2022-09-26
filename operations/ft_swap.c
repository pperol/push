/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:13:16 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:04:04 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Intervertit les 2 premiers éléments au sommet d'une pile.
// Ne fait rien s’il y en a moins de 2.
// Renvoi faux ou vrai

#include "../push_swap.h"

int	ft_swap(t_stack **stk)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (*stk == NULL || (*stk)->size < 2)
		return (0);
	else
	{
		tmp1 = *stk;
		tmp2 = (*stk)->next->next;
		*stk = (*stk)->next;
		(*stk)->next = tmp1;
		tmp1->next = tmp2;
	}
	return (1);
}
