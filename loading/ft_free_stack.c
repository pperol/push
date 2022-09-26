/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:58:29 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 11:20:51 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Supprimme la stack de la mémoire

#include "../push_swap.h"

void	ft_free_stack(t_stack **stk)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stk;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
