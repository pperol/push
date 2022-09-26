/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:21:58 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:11:06 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le bas tous les élements de la pile. 
// Le dernier élément devient le premier.
// Renvoie faux ou vrai.

#include "../push_swap.h"

int	ft_reverse_rotate(t_stack **stk)
{
	t_stack	*temp;
	t_stack	*prev;

	if (*stk == NULL || (*stk)->size == 1)
		return (0);
	else
	{
		temp = (*stk);
		while ((*stk)->next != NULL)
		{
			prev = (*stk);
			(*stk) = (*stk)->next;
		}
		prev->next = NULL;
		(*stk) = (*stk);
		(*stk)->next = temp;
	}
	return (1);
}
