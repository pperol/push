/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:17:45 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:11:20 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le haut tous les élements de la pile.
// Le premier élément devient le dernier.
// Renvoi faux ou vrai

#include "../push_swap.h" 

int	ft_rotate(t_stack **stk)
{
	t_stack	*c;
	t_stack	*tmp;

	if (*stk == NULL)
		return (0);
	else
	{
		tmp = (*stk);
		c = (*stk);
		*stk = (*stk)->next;
		while (c->next != NULL)
			c = c->next;
		c->next = tmp;
		tmp->next = NULL;
	}
	return (1);
}
