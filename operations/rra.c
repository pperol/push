/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:44:38 by pperol            #+#    #+#             */
/*   Updated: 2022/09/25 21:14:20 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Décale d’une position vers le bas tous les élements de la pile a.
// Le dernier élément devient le premier. 
// Imprime rra\n sur la sortie standard.
// Exit dans le cas contraire.

#include "../push_swap.h"

void	rra(t_stack **stk_a)
{
	ft_reverse_rotate(stk_a);
	write(1, "rra\n", 4);
}
