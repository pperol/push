/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:13:16 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:53:28 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prend le premier élément au sommet de la pile et le met sur l'autre pile.
// Ne fait rien s’il n’y a pas d'éléments sur la pile.
// Renvoi faux ou vrai

#include "../push_swap.h"

void	ft_update_stk(t_stack *stk_start, t_stack *stk_end)
{
	int	i;
	int	size;

	i = 0;
	while (stk_start)
	{
		stk_start->size--;
		stk_start->rank = i;
		stk_start = stk_start->next;
		i++;
	}
	i = 0;
	if (stk_end->next == NULL)
		size = 1;
	else
		size = stk_end->next->size + 1;
	while (stk_end)
	{
		stk_end->rank = i;
		stk_end->size = size;
		stk_end = stk_end->next;
		i++;
	}
}

int	ft_push(t_stack **stk_start, t_stack **stk_end)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (*stk_start == NULL)
		return (0);
	else
	{
		tmp1 = (*stk_start);
		tmp2 = (*stk_end);
		if ((*stk_start)->size == 1)
			*stk_start = NULL;
		else
			*stk_start = (*stk_start)->next;
		*stk_end = tmp1;
		tmp1->next = tmp2;
	}
	ft_update_stk(*stk_start, *stk_end);
	return (1);
}
