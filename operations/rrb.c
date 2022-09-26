/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:40 by pperol            #+#    #+#             */
/*   Updated: 2022/09/26 12:05:56 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le bas tous les élements de la pile b.
// Le dernier élément devient le premier. 
// Imprime rrb\n sur la sortie standard.
// Exit dans le cas contraire.

#include "../push_swap.h"

void	rrb(t_stack **stk_b)
{
	ft_reverse_rotate(stk_b);
	write(1, "rrb\n", 4);
}
